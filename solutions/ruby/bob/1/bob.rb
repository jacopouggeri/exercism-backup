class Bob
  def hey(phrase)
    if phrase =~ /\s{2,}/ || phrase.empty?
      return 'Fine. Be that way!'
    elsif phrase == phrase.upcase && phrase =~ /[[:alpha:]]/
      return 'Whoa, chill out!'
    elsif phrase[-1] == '?'
      return 'Sure.'
    else
      return 'Whatever.'
    end
  end
end