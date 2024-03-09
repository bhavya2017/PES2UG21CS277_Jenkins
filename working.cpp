pipeline {
    agent any

    stages {
        stage('Build') {
            steps {
                script {
                    sh 'g++ -o your_executable working.cpp'
                    echo 'Build Stage Successful'
                }
            }
        }
        stage('Test') {
            steps {
                script {
                    sh './working'
                    echo 'Test Stage Successful'
                }
            }
        }
        stage('Deploy') {
            steps {
                // Add deployment steps here
                echo 'Deployment Successful'
            }
        }
    }

    post {
        failure {
            echo 'Pipeline failed'
        }
    }
}
