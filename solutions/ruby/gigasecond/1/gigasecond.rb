class Gigasecond
  VERSION = 1
  def self.from(moment)
    raise ArgumentError unless moment.is_a? Time
    gs = moment + 10**9
  end
end

puts Gigasecond.from(Time.utc(2000, 7, 25, 18, 36, 30))