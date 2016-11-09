def override(func):
    def increment():
        return func() + 1
    return increment

def printpls(func):
    def printit():
        print(func())
    return printit

@printpls
@override
def one():
    return 1

one()
