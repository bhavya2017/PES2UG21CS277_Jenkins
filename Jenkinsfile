pipeline {
    agent any

    stages {
        stage('Build') {
            steps {
                sh 'g++ working.cpp -o PES2UG21CS277-1' // Compile working.cpp and output PES2UG21CS277-1
            }
        }
        stage('Test') {
            steps {
                sh './PES2UG21CS277-1' // Execute PES2UG21CS277-1 binary
            }
        }
        stage('Deploy') {
            // Add your deployment commands here (e.g., copy to server)
            steps {
                scp PES2UG21CS277-1 user@server:destination/
            }
        }
    }

    post {
        failure {
            echo 'Pipeline Failed!'
        }
    }
}
