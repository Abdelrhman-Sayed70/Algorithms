using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Timers;

namespace Helpers
{
    public abstract class ProblemBase : IProblem
    {
        public abstract string ProblemName { get; }
        Timer aTimer ;
        public void Run(HardniessLevel level, int timeOutInMillisec)
        {
            aTimer = new Timer();
            // Hook up the Elapsed event for the timer. 
            aTimer.Elapsed += OnTimedEvent;
            // Have the timer fire repeated events (true is the default)
            aTimer.AutoReset = false;

            Console.WriteLine("{0}: {1} Test Cases ....", ProblemName, level.ToString().ToUpper());
            TextReader origConsole = Console.In; //to set-back
            switch (level)
            {
                case HardniessLevel.Both:
                    RunOnSpecificFile(GetFileName(HardniessLevel.Easy), level, timeOutInMillisec);
                    RunOnSpecificFile(GetFileName(HardniessLevel.Hard), level, timeOutInMillisec);
                    break;
                case HardniessLevel.Easy:                    
                case HardniessLevel.Hard:
                    RunOnSpecificFile(string.Format("{0}_{1}.txt", ProblemName, level.ToString()), level, timeOutInMillisec);
                    break;
                default:
                    break;
            }
            Console.SetIn(origConsole);
        }
        private bool timeout;

        protected bool isTimeout
        {
            get { return timeout; }
        }
        private void OnTimedEvent(object sender, ElapsedEventArgs e)
        {
            timeout = true;
            OnTimeOut(e.SignalTime);
        }

        protected string GetFileName(HardniessLevel level)
        {
            switch (level)
            {
                case HardniessLevel.Both:
                    throw new ArgumentException("Invalid hardniess level value");
                case HardniessLevel.Easy:
                case HardniessLevel.Hard:
                    return string.Format("{0}_{1}.txt", ProblemName, level.ToString());                
            }
            throw new ArgumentException("Invalid hardniess level value");
        }
        protected int[] GetArray(BinaryReader br)
        {
            var arrLength = br.ReadInt32();
            int[] arr = new int[arrLength];
            for (int i = 0; i < arrLength; i++)
            {
                arr[i] = br.ReadInt32();
            }
            return arr;
        }

        public abstract void TryMyCode();

        public abstract void GenerateTestCases(HardniessLevel level, int numOfCases, bool includeTimeInFile = false, float timeFactor = 1);
        
        protected abstract void RunOnSpecificFile(string fileName, HardniessLevel level, int timeOutInMillisec);

        protected void StartTimer(int milliSecs)
        {
            timeout = false;
            if (aTimer == null)
                aTimer = new Timer();
            aTimer.Interval = milliSecs;
            // Start the timer
            aTimer.Start();
        }
        protected abstract void OnTimeOut(DateTime signalTime);

    }
}
