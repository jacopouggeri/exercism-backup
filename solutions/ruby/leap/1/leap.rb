class Year
  VERSION = 1
  def self.leap?(year)
    if year.to_s[2..3] =~ /00/
      year % 400 == 0 ? true : false
    else
      year % 4 == 0 ? true : false
    end
  end
end