## 四目並べ

コマンドラインで実行できる四目並べゲームです。  
縦６マス　×　横７マスのボードで、下から積み上げる形ようにして、  
'o'か'x'を連続して、先に縦、横、斜めのいずれかに並べた方の勝ちです。

先手が'o'、後手が'x'を並べます。

ボード上に並べる場所がなくなったら引き分けです。

![finish_img.png](https://user-images.githubusercontent.com/72925757/146101362-91d6b2cc-5ad6-4a8d-b878-e3dffdb06839.png)


## 実行ファイルの作成

リポジトリをgit clone してください。

```shell
git clone git@github.com:sunix2019/so_long.git
```

git clone が成功したら、リポジトリの中で、"make"とコマンドを入力してください。   

```
cd yonmoku
make
```

make が成功したら、実行ファイル"yonmoku"が作成されています。

## 使い方

実行ファイルが作成されたら、"./yonmoku"とコマンドを入力してください。   

```shell
./yonmoku
```

ボードが表示され、印をつけるための列番号の入力待機状態になるので、   
印をつけたい列番号を入力してください。列番号は１〜７です。


![start_img.png](https://user-images.githubusercontent.com/72925757/146100866-b9420cf8-62a8-48be-aaab-168a088d372a.png)



先手が列番号を入力すると、再度ボードが表示され、後手の入力となります。  

ゲームの途中で最初から始める場合は、列番号ではなく"reset"と入力してください。  
また、ゲームを終了する場合は、"exit"と入力してください。
