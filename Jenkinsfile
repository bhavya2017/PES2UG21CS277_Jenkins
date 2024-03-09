\pipeline {
    agent any

    tools {
        maven 'Maven' // 'Maven' should match the name you configured in Jenkins
    }

    stages {
        stage('Build') {
            steps {
                script {
                    sh 'mvn clean install' // Use 'mvn' command directly, Jenkins will automatically use the configured Maven version
                }
            }
        }
        stage('Test') {
            steps {
                script {
                    sh 'mvn test' // Use 'mvn test' command for testing
                }
            }
        }
        stage('Deploy') {
            steps {
                script {
                    sh 'mvn deploy' // Use 'mvn deploy' command for deployment
                }
            }
        }
    }

    post {
        failure {
            echo 'Pipeline failed'
        }
    }
}
