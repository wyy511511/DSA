func returnFifteen() -> Int {
    var y = 10
    func add(){
        y+=5
    }
    add()
    return y
}

returnFifteen()

//不规范的
func makeIncrementer() ->((Int)-> Int) {
    func addOne(number: Int) -> Int{
        return number + 1
    }

    return addOne
}

var increment = makeIncrementer()

increment(7)

//规范的
func makeIncrementer() -> ((Int) -> Int) {
    func addOne(number: Int) -> Int {
        return 1 + number
    }
    return addOne
}
var increment = makeIncrementer()
increment(7)


func hasAnyMatches(list: [Int], condition:(Int)->Bool)-> Bool{
    for item in list{
        if condition(item) {
            return true
        }
    }
    return false
}
func lessThanTen(number: Int)->Bool{
    return number < 10
}

var numbers = [20,19,7,12]
hasAnyMatches(list: numbers,condition:lessThanTen)

//修改之后的
var mm=0
var nn=0
func hasAnyMatches(list: [Int], condition: (Int) -> Bool) -> Bool {
    for item in list {
        if condition(item) {
            mm += 1
            return true
        }
         nn += 1
    }
   
    return false
}
func lessThanTen(number: Int) -> Bool {
    return number < 10
}
var numbers = [11, 12, 3]
hasAnyMatches(list: numbers, condition: lessThanTen)
mm
nn

//map是用的自带的
numbers.map({ (number:Int) -> Double in
    let result = 1.2 * number
    return result

})

//standard example
numbers.map({ (number: Int) -> Int in
    let result = 3 * number
    return result
})



numbers.map({ (number:Double) -> Double in
    let result = 1.2 * number
    return result

})
//Cannot invoke 'map' with an argument list of type '(@escaping (Double) -> Double
//直接用强制类型转化也不行 
//改写 
numbers.map({ (number: Int) -> Int in
    var result  = 0
    if number%2==1{
         result=0
    }else{
        result = number
    }
    
    return result
})

