# put-line-number

## 仕様
ファイルを開いて，行番号をつけてtextで出力します

## 使い方
以下のコマンドを順番に打ち込む。

    $git clone https://github.com/ohayashi2490/put-line-number.git
    $cd put-line-number
    $./pln <READ_FILENAME> <WRITE_FILENAME>

`<READ_FILENAME>`: 読み込むファイル名（パス） ex)`putLineNumber.c`

`<WRITE_FILENAME>`: 書き出すファイル名 ex)`./output/plnOutput.txt`

`<WRITE_FILENAME>`は省略可 無い場合は拡張子を`.txt`に置き換える ex)`putLineNumber.txt`になる
