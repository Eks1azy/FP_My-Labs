using System;

namespace Artem
{
    public class Matrix
    {
        private int[,] MatrixArray;
        private int sum;

        public Matrix(int[,] val)
        {
            MatrixArray = val;
            sum = CalcSum();
        }

        private int CalcSum() //метод для обчислення суми всіх елементів масиву
        {
            int total = 0;
            foreach (int val in MatrixArray) // цикл для проходу по кожному елементу
                total += val;
            return total;
        }

        public int Sum => sum;

        public double GetRowRMS(int row) //метод для обчислення середньоквадратичного значення рядка
        {
            if (row < 0 || row >= MatrixArray.GetLength(0))
                throw new IndexOutOfRangeException("Неправильний iндекс рядка!");

            int cols = MatrixArray.GetLength(1);
            if (cols == 0)
                return 0;

            double sumOfSquares = 0;
            for (int j = 0; j < cols; j++)
                sumOfSquares += Math.Pow(MatrixArray[row, j], 2);

            return Math.Sqrt(sumOfSquares / cols);
        }

        public void PrintMatrix() //метод для виводу матриці
        {
            for (int i = 0; i < MatrixArray.GetLength(0); i++)
            {
                for (int j = 0; j < MatrixArray.GetLength(1); j++)
                    Console.Write(MatrixArray[i, j] + "\t");

                Console.WriteLine();
            }
        }

        public int this[int row, int col] //двовимірний індексатор для доступу до елементів матриці
        {
            get
            {
                if (row < 0 || row >= MatrixArray.GetLength(0) || col < 0 || col >= MatrixArray.GetLength(1))
                    throw new IndexOutOfRangeException("Неправильний iндекс!");

                return MatrixArray[row, col];
            }
        }
    }
}
