#include "controlador.h"

Controlador::Controlador( char* dados[], int qntParametro){
    m_forma = "";
    m_qntParametro = qntParametro;
    run(dados);
}

Controlador::~Controlador(){}

void Controlador::run(char* dados[]){
    if( m_qntParametro > 2 ){
        m_forma = dados[1];
        int qntLetras = m_forma.size();
        
        for(int i = 0; i < qntLetras; i++){
            m_forma[i] = tolower( m_forma[i] );
        }
        
        if( m_forma.compare( "triangulo" ) == 0 ){

            if( m_qntParametro == 4 ){
                Triangulo t( std::atoi( dados[2] ), std::atoi( dados[3] ) );
                cout << t;
            }else{
                erroParam();
            }

        }else if( m_forma.compare( "quadrado" ) == 0 ){

            if( m_qntParametro == 3 ){
                Retangulo q( std::atoi( dados[2] ) );
                cout << q;
            }else{
                erroParam();
            }
            
        }else if( m_forma.compare( "retangulo" ) == 0 ){

            if( m_qntParametro == 4 ){
                Retangulo r( std::atoi( dados[2] ), std::atoi( dados[3] ) );
                cout << r;
            }else{
                erroParam();
            }
            
        }else if( m_forma.compare( "circulo" ) == 0){
            
            if( m_qntParametro == 3 ){
                Circulo c( std::atoi( dados[2] ) );
                cout << c;
            }else{
                erroParam();
            }
            
        }else if( m_forma.compare( "cubo" ) == 0){
            
            if( m_qntParametro == 3 ){
                Cubo c( new Retangulo( std::atoi( dados[2] ) ) );
                cout << c;
            }else{
                erroParam();
            }

        }else if( m_forma.compare( "piramide" ) == 0){
            
            if( m_qntParametro == 4 ){
                Piramide p( new Retangulo( std::atoi( dados[2] ) ),
                            new Triangulo( std::atoi( dados[2] ), std::atoi( dados[3] ) ) );
                cout << p;
            }else{
                erroParam();
            }
        
        }else if( m_forma.compare( "paralelepipedo" ) == 0){
            
            if( m_qntParametro == 5 ){
                Paralelepipedo p( std::atoi( dados[2] ), std::atoi( dados[3] ), std::atoi( dados[4] ) );
                cout << p;
            }else{
                erroParam();
            }
        
        }else if( m_forma.compare( "esfera" ) == 0){
            
            if( m_qntParametro == 5 ){
                Esfera e( std::atoi( dados[2] ) );
                cout << e;
            }else{
                erroParam();
            }
        
        }else{
            cout << "Forma selecionada inválida" << endl;
        }
    }else{
        manual();
    }
}

//Orientação pela url https://www.hardware.com.br/comunidade/ler-arquivos/1061210/
void Controlador::manual(){
    string linha;
    std::ifstream arquivo ("manual.txt"); // ifstream = padrão ios:in
    if (arquivo.is_open())
    {
        while (! arquivo.eof() ) //enquanto end of file for false continua
        {
        getline (arquivo,linha); // como foi aberto em modo texto(padrão)
                                //e não binário(ios::bin) pega cada linha
        cout << linha << endl;
        }
        arquivo.close();
    }

  else cout << "Unable to open file"; 
}

void Controlador::erroParam(){
    cout << "ERRO!" << endl <<
            "A quantida de parâmetros fornecidos não é válida para a forma selecionado." << endl;
}