class PrimeFactors
  VERSION = 1
  def self.for(int)
    return [] if int == 1
    prime = (2..int).find {|pr| int % pr == 0}
    [prime] << self.for(int / prime)
  end
end