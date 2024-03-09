pipeline {
    agent any
    
    stages {
        stage('Build') {
            steps {
                sh 'g++ -o PES2UG21CS277-1 working.cpp'
            }
        }
        
        stage('Test') {
            steps {
                sh './PES2UG21CS277-1'
            }
        }
        
        stage('Deploy') {
            steps {
                // Placeholder step for Deploy
                echo 'Deploying...'
            }
        }
    }
    
    post {
        always {
            echo 'Pipeline failed'
        }
    }
}
