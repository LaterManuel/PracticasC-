// Problema 2.30
int main() {
  using namespace std;
  cout<<"Calculadora del indice de masa corporal"<<endl;
  int weight; 
  float height;
  float bmi;
  cout << "Ingrese el peso"<<endl;
  cin>> weight;
  cout << "Ingrese la altura"<<endl;
  cin>> height;
  bmi= (weight)/(height*height);
  if (bmi<18.5){
    cout << "Bajo de peso, su BMI es "<<bmi<<endl;
  } else if (bmi >= 18.5 && bmi <= 24.9){
    cout << "Normal, su BMI es "<<bmi<<endl;
  } else if (bmi >=25 && bmi <= 29.9){
    cout << "Sobrepeso, su BMI es "<<bmi<<endl;
  } else if (bmi >= 30){
    cout <<"Obese, su BMI es "<<bmi<<endl;
  }
  return 0; 
}