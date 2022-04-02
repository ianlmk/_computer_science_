cs () {
  c++ $1 -o main && ./main
}

export PS1="<\e[0;36m\u\e[0;32m@\h\e[m - \e[31m\d \t \e[m - \e[1;33m\w/\e[m>\n>>> "
alias ll='ls -alhF --color=auto'
export CLICOLOR=1
alias ls='ls -GFh'
