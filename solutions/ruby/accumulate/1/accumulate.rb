class Array
  def accumulate
    res = []
    self.each do |e|
      res << yield(e)
    end
    res
  end
end