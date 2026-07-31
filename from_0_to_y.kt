import java.io.BufferedReader
import java.io.InputStreamReader
import java.util.StringTokenizer

fun main() {
    val reader = BufferedReader(InputStreamReader(System.`in`))
    var tokenizer: StringTokenizer? = null

    fun nextToken(): String {
        while (tokenizer == null || !tokenizer!!.hasMoreTokens()) {
            val line = reader.readLine() ?: return ""
            tokenizer = StringTokenizer(line)
        }
        return tokenizer!!.nextToken()
    }

    val nStr = nextToken()
    if (nStr.isEmpty()) return
    var n = nStr.toInt()
    
    val output = StringBuilder()

    while (n-- > 0) {
        val x = nextToken().toInt()
        val y = nextToken().toInt()

        val p = y / x
        val remainder = y % x
        
        // Calculate the sum of digits of P
        var tempP = p
        var digitSum = 0
        while (tempP > 0) {
            digitSum += tempP % 10
            tempP /= 10
        }

        val totalOps = digitSum + remainder
        output.append(totalOps).append("\n")
    }
    
    print(output)
}
