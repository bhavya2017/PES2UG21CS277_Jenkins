pipeline {
    agent any

    stages {
        stage('Build') {
            steps {
                script {
                    def mvnHome = tool 'Maven'
                    if (mvnHome) {
                        sh "cd C:\Program Files\Java\apache-maven-3.9.6-bin && ${mvnHome}/bin/mvn clean install"
                        echo 'Build Stage Successful'
                    } else {
                        error 'Maven not configured properly. Please check Maven installation in Jenkins configuration.'
                    }
                }
            }
        }
        stage('Test') {
            steps {
                script {
                    def mvnHome = tool 'Maven'
                    if (mvnHome) {
                        sh "cd C:\Program Files\Java\apache-maven-3.9.6-bin && ${mvnHome}/bin/mvn test"
                        echo 'Test Stage Successful'
                    } else {
                        error 'Maven not configured properly. Please check Maven installation in Jenkins configuration.'
                    }
                }
            }
        }
        stage('Deploy') {
            steps {
                script {
                    def mvnHome = tool 'Maven'
                    if (mvnHome) {
                        sh "cd C:\Program Files\Java\apache-maven-3.9.6-bin && ${mvnHome}/bin/mvn deploy"
                        echo 'Deployment Successful'
                    } else {
                        error 'Maven not configured properly. Please check Maven installation in Jenkins configuration.'
                    }
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
