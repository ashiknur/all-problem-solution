#include<bits/stdc++.h>
using namespace std;
class Matrix
{
public:
	vector<vector<double> >Mat;
	int row()
	{
		return Mat.size();
	}
	int col()
	{
		return Mat[0].size();
	}
	Matrix(int row, int col);
	Matrix Add(Matrix a, Matrix b);
	void transpose();
	void show();
	Matrix Multiply(Matrix a, Matrix b);
	Matrix Multiply(Matrix a, int num);
	Matrix Substract(Matrix a, Matrix b);
	

	//-------operator overloading----
	Matrix operator + (Matrix b)
	{
		return Add(*this, b);
	}
	Matrix operator - (Matrix b)
	{
		return Substract(*this, b);
	}
	Matrix operator * (Matrix b)
	{
		return Multiply(*this, b);
	}
	Matrix operator * (int num)
	{
		return Multiply(*this, num);
	}
	Matrix operator ~ ()
	{
		Matrix f(this->row(), this->col());
		f = *this;
		f.transpose();
		return f;
	}
	void operator *= (int num)
	{
		*this = Multiply(*this, num);
	}
	void operator *= (Matrix b)
	{
		*this = Multiply(*this, b);
	}
	void operator += (Matrix b)
	{
		*this = Add(*this, b);
	}
	void operator -= (Matrix b)
	{
		*this = Substract(*this, b);
	}
	
};
Matrix::Matrix(int row, int col)
{
	Mat.resize(row);
	for (int i = 0; i < row; i++)
	{
		Mat[i] = vector<double>(col, 0);
	}
}

Matrix Matrix::Add(Matrix a, Matrix b)
{
	try
	{
		if (a.row() != b.row() || a.col() != b.col()) throw "Matrix size doesn't match...\nCan't do addition...";
		for (int i = 0; i < a.row(); i++)
		{
			for (int j = 0; j < a.col(); j++)
			{
				a.Mat[i][j] += b.Mat[i][j];
			}
		}
		return a;
	}
	catch (string ex)
	{
		cout << ex << endl;
	}
}


Matrix Matrix::Multiply(Matrix a, int num)
{
	for (int i = 0; i < a.row(); i++)
	{
		for (int j = 0; j < a.col(); j++)
		{
			a.Mat[i][j] *= num;
		}
	}
	return a;

}
Matrix Matrix::Substract(Matrix a, Matrix b)
{
	try
	{
		if (a.row() != b.row() || a.col() != b.col()) throw "Matrix size doesn't match...\nCan't do addition...";
		for (int i = 0; i < a.row(); i++)
		{
			for (int j = 0; j < a.col(); j++)
			{
				a.Mat[i][j] -= b.Mat[i][j];
			}
		}
		return a;
	}
	catch (string ex)
	{
		cout << ex << endl;
	}
}
Matrix Matrix::Multiply(Matrix a, Matrix b)
{
	try
	{
		if (a.col() != b.row()) throw "Can't do multiplication on this dimention\nError: First matrix's col must be equal to second matrix's row...";
		Matrix ans(a.row(), b.col());
		for (int i = 0; i < a.row(); i++)
		{
			for (int j = 0; j < b.col(); j++)
			{
				for (int k = 0; k < a.col(); k++)
				{
					ans.Mat[i][j] += a.Mat[i][k] * b.Mat[k][j];
				}
			}
		}
		return ans;
	}
	catch (string ex)
	{
		cout << ex << endl;
	}
}
void Matrix::transpose()
{
	Matrix ans(this->col(), this->row());
	for (int i = 0; i < this->row(); i++)
	{
		for (int j = 0; j < this->col(); j++)
		{
			ans.Mat[j][i] = this->Mat[i][j];
		}
	}
	this->Mat = ans.Mat;
}
void Matrix::show()
{
	for (int i = 0; i < this->row(); i++)
	{
		for (int j = 0; j < this->col(); j++)
		{
			cout<<fixed<<setprecision(0) << this->Mat[i][j] << " ";
		}
		cout << endl;
	}
}





int main()
{
    int n,m;
    cin>>n>>m;
	Matrix a(n, m);
	
	for (int i = 0; i < a.row(); i++)
	{
		for (int j = 0; j < a.col(); j++)
		{
			cin >> a.Mat[i][j];
		}
	}
	a=~a;
	a.show();
}

