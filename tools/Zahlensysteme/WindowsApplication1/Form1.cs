using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Text;
using System.Windows.Forms;

namespace WindowsApplication1
{
    public partial class form1 : Form
    {
        private int[] numberSystems = {
            2, 8, 10, 16 };
        private string[] digits = {
            "0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "A", "B", "C", "D", "E", "F" };

        private string question = "Wandeln Sie die Zahl $0 mit Basis $1 in das System mit Basis $2 um";
        private string answer = "Ihre Antwort ist $0";
        private string solution;

        private Random random = new Random();

        private readonly int MAX_VALUE = 5000;
        private readonly int MIN_VALUE = 10;

        public form1()
        {
            InitializeComponent();
        }



        private void newButton_Click(object sender, EventArgs e)
        {
            this.solutionTextBox.Text = "";
            this.solutionTextBox.Enabled = true;
            this.showButton.Enabled = true;
            this.checkButton.Enabled = true;

            // delete answer
            this.answerLabel.Text = string.Empty;
            
            // generate random number between MAX_VALUE and MIN_VALUE
            int randomNumber = random.Next(MIN_VALUE, MAX_VALUE);
            int currentBase = numberSystems[random.Next(numberSystems.Length)];
            int targetBase = numberSystems[random.Next(numberSystems.Length)];
            while (targetBase == currentBase)
            {
                targetBase = numberSystems[random.Next(numberSystems.Length)];
            }
            string currentNumber = fromBase10To(randomNumber, currentBase);
            string targetNumber = fromBase10To(randomNumber, targetBase);

            String q = this.question.Replace("$0", currentNumber);
            q = q.Replace("$1", currentBase.ToString());
            q = q.Replace("$2", targetBase.ToString());
            this.questionLabel.Text = q;

            solution = targetNumber.ToString().Trim().ToUpper().Replace(" ", "");
        }

        private string fromBase10To(int number, int b)
        {
            string result = string.Empty;
            while (number / b != 0)
            {
                int digit = number % b;
                result = result.Insert(0, digits[digit]);
                number = number / b;
            }
            result = result.Insert(0, digits[number % b]);
            return result;
        }

        private void checkButton_Click(object sender, EventArgs e)
        {
            string userSolution = solutionTextBox.Text.Trim().ToUpper().Replace(" ", "");
            string msg = answer;
            if (userSolution.Equals(solution))
            {
                msg = answer.Replace("$0", "RICHTIG");
            }
            else
            {
                msg = answer.Replace("$0", "FALSCH");
            }
            this.answerLabel.Text = msg;
        }

        private void showButton_Click(object sender, EventArgs e) {
            this.solutionTextBox.Text = "";
            this.solutionTextBox.Enabled = false;
            this.checkButton.Enabled = false;
            this.showButton.Enabled = false;
            this.answerLabel.Text = "Die Loesung lautet " + solution;
        }
    }
}