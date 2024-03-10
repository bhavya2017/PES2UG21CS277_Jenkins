pipeline{
  agent any
  stages {
          stage('Clone repository'){
            steps {
              checkout([$class: 'GitSCM',
              branches: [[name: '*/main']],
              userRemoteConfigs: [[url: 'https://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@github.com/bhavya2017/PES2UG21CS277_Jenkins']]])
            }
          }
    stage('Build'){
        steps {
          build 'PES2UG21CS277-1'
          sh 'g++ working.cpp -o output'
        }
    }
    stage('Deploy') {
        steps {
            echo 'deploy'
        }
    }
}
post{
  failure{
    error 'Pipeline failed'
  }
}
}
