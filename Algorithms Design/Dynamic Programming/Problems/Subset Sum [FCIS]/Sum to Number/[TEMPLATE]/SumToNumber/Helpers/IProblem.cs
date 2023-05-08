using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Helpers
{
    public interface IProblem
    {
        /// <summary>
        /// Try the core implementation on a given hard coded test case
        /// </summary>
        void TryMyCode();

        /// <summary>
        /// Try the solution on a given hardniess level
        /// </summary>
        /// <param name="level">Hard, Easy or Both</param>
        /// <param name="timeOutInMillisec">Max timeout interval per case (in ms)</param>
        void Run(HardniessLevel level, int timeOutInMillisec);

        /// <summary>
        /// Generate a file of test cases according to the specified params
        /// </summary>
        /// <param name="level">Easy or Hard</param>
        /// <param name="numOfCases">Required number of cases</param>
        /// <param name="includeTimeInFile">specify whether to include the expected time for each case in the file or not</param>
        /// <param name="timeFactor">factor to be multiplied by the actual time</param>
        void GenerateTestCases(HardniessLevel level, int numOfCases, bool includeTimeInFile = false, float timeFactor = 1);
    }
}
