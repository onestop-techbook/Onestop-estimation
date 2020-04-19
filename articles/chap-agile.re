= アジャイルと見積もり

//flushright{
@erukiti
//}

本章では皆さんも大好きなアジャイルにまつわる見積もりについて触れてみましょう。

アジャイルとは、顧客が本当に求めるものをコミュニケーション重視で素早く開発するスタイルのことです@<fn>{agility}。

//footnote[client][内製であれば顧客とは、プランナーや偉い人やディレクターなどになるでしょう。場合によっては自分たち主導で作ることもあります。]
//footnote[agility][agile（アジャイル）とは機敏な、素早くという意味の単語です。語形変化としてのagility（アジリティ）はよくゲームで見かける単語で、素早さ・機敏さを意味しますね。]

//table[agile-manifesto][アジャイルソフトウェア開発宣言]{
これらよりも	この価値観を優先する
-----------------------
プロセスやツール	個人と対話
包括的なドキュメント	動くソフトウェア
契約交渉	顧客との協調
計画に従うこと	変化への対応
//}

アジャイルソフトウェア開発宣言（アジャイルマニフェスト）@<fn>{agile-manifesto-url}とは、アジャイルの根底にある価値観です。

//footnote[agile-manifesto-url][@<href>{https://agilemanifesto.org/iso/ja/manifesto.html}]

やり方やツールにこだわるよりもコミュニケーションを重視し、ドキュメント整備に力を割くよりは、実際に動くソフトウェアを作ること、契約交渉をガチガチにやるよりは顧客と一緒にいいものを作ること、計画ベースではなく、世の中の状況に逐次対応することを優先します。

さて、本書のテーマである見積もりとアジャイルというのは切っても切り離せない関係にあります。どれだけ素早く顧客の求めるものを作り上げるか？というのがアジャイルの根幹にあるためです。

====[column] アジャイルとは手抜きではない

アジャイルに関しては色々と誤解も多く、手抜きを隠す言葉として使われたり、なんちゃってアジャイルなんかも蔓延していることにはご注意ください。

たとえばアジャイルでは設計をサボったり、ドキュメントをまったく書かないわけではありません。Excelドキュメントや、Excelにスクショ貼り付けのような非効率的なことを嫌いますが、効率的に必要最小限のドキュメントを書くことはとても大切です。

たとえばソースコードにドキュメントを埋め込むJavaDocやJSDocのような形式や、PlantUML, Mermaidなどを使ったテキスト表現可能な図、Markdownで書かれた文章などはアジャイル開発でも多用されます。

また、アジャイルは銀の弾丸ではありません。アジャイルプラクティスと呼ばれるさまざまなテクニックはありますが、テクニックはあくまで単なるテクニックです。

プロセスやツールに捕らわれてしまうとアジャイルとしての価値観を見失っているのだということを思い出しましょう。

====[/column]

== 技術的スパイク

見積もりをしたいけど、ある機能を実装するために必要な工程がまったく見えないこともあります。そんな時には、技術的スパイクと呼ばれるタスクを行います。

単に技術調査といってしまうと目的がぼやけるかもしれません。絶対に目的を見失ってはいけません。技術的スパイクは、あくまで作業工程を洗い出すことであり、そのための実験的な実装に限定しておきます。

スパイクではなるべく最小限のコードを書いて検証を行います。プロダクションコードと独立していることが望ましいです。

このスパイクは可能であれば、ブログに書くか、まとめて技術書典で同人誌として出すといいでしょう。

== バッファ

見積もりではよく「見積もった時間の3倍」みたいな法則がいわれます。これはある大きな案件を一人で処理するときならそういう見積もり方でもいいでしょう。

ただし、これをタスクの見積もりに適用すると途端に問題になります。タスクごとにバッファを設けると、そのバッファが蓄積して大きな誤差になるからです。

それよりはたとえば、タスク見積もりにはあまりバッファを設けず、イテレーションごとにバッファを用意するというやり方の方がお勧めです。ただしこれは心理安全性が保証されていることが重要です。

個々人の保身が始まるとどうしてもタスクごとのバッファを設けざるを得なくなるためです。

アジャイルは、個人の責任ではなく、チームの責任にすることがとても大切です。

バッファの考え方に関しては詳しくはエリヤフ・ゴールドラットの「クリティカルチェーン」を読むといいでしょう。

====[column] 制約条件の理論（TOC）およびリーン

TOCとは theory of constrains の略で、1984年にエリヤフ・ゴールドラットが提唱した、サプライチェーンでどうやって部品を供給すれば、もっとも全体最適ができるか？という理論です。

雑にいうと、ボトルネック以上の部品を倉庫にためておくのは害しかないので、ボトルネックに合わせてスループットを調整しろという考え方です。

TOCの本としては「ザ・ゴール」などのシリーズがありますがその中に「クリティカルチェーン」というTOCの考え方をスケジュール管理に応用したバージョンがあります。

リーンは同じ頃にMITで提唱された概念で、ルーツはトヨタのカンバン方式です。今の時代からは想像もつきませんが、当時の日本は意味不明なほどの生産性の高い国として認識されていたのです。

リーンもTOC同様に、ボトルネック以上の無駄をなくそうとする考え方です。

ちなみにこれらTOCやリーンは、アジャイルの源流でもあります。年々肥大化し続けるソフトウェア開発をどうやって素早くするか？無駄をなくすか？を実現するためにTOCやリーンの考え方を導入しています。

アジャイルの正体を知りたい人は、TOCやリーンについて調べるとよいでしょう。

そもそもリーンはスタートアップをはじめとしたリーン開発として実際にソフトウェア開発でも重要な概念です。

====[/column]

== 不確実性のコーン

スティーブ・マコネルの提唱する「不確実性のコーン」とは、最初のうちは見積もり精度が悪く、作業が完了に近づけば近づくほど精度が上がることを指します。

たとえば1年単位のプロジェクトであれば、最初の計画策定の段階では1年と想定してても、4ヶ月で終わったり3年で終わったりする程度の精度でしか見積もれなかったりするかもしれません。

1年規模のプロジェクトであれば、やらなければならないことは、とてもとても大量にあるはずです。誤差は常に蓄積し続けます。そもそも最初の時点では情報のすべてがそろってるとは限りません。調査してはじめて分かること、実装してみてはじめて分かること、顧客が動かしてはじめて分かることがあります。1年後にはビジネスの状況が変化しているかもしれません。

しかし、あと残り3ヶ月という位になっていれば、残っている作業の見積もり精度はかなり上がっていることでしょう。見落としも減って、不確定だったことが確定しているはずだからです。

長期の超正確な見積もりというのはよほど堅実な業界ならともかく、基本的にはできません。変動の激しいビジネスシーンではちょっとしたことで、あっという間に技術が進歩してしまったり@<fn>{advance-tech}、人の好みが変わったりします。

//footnote[advance-tech][ここ最近は毎年のように色々なジャンルの技術で、極端なまでの進化を見せることがあります。技術の進化は今後も途切れることはあり得ません。]

では、1年規模のプロジェクトの見積もりに1ヶ月とか費やしますか？机上の空論で見積もり続ける位なら、プロトタイプを作ったりした方が進む可能性は高いでしょう。どうしてもコストがかかりすぎるとか、よほどの理由があれば見積もりに1ヶ月とか、あるいはそれ以上の期間を費やしてもいいのかもしれません。

さて、1年のプロジェクトと3ヶ月のプロジェクトなら、3ヶ月のプロジェクトの方が見積もり精度は高いはずです。見積もらなければならない要素が少なくなるからです。

さらにいえば3ヶ月のプロジェクトも2週間ごとに順次作っていけば、さらに堅実に進められるのではないでしょうか？

== イテレーション

アジャイル開発では素早くサイクルを回すことを重要視します。

このサイクルはイテレーション（繰り返し）と呼ばれ、短ければ1週間、普通は2週間程度で、どれだけ長くてもせいぜい1ヶ月ごとに行われます。

イテレーションごとに、顧客にとって何か価値のあるものを成果として見せます。短期間で成果を見せるのはムズカシイでしょうか？UIであれば実際に動くモック、ある1つの機能、そういったものなら出せるとは思いませんか？

アジャイルに限らずエンジニアなら分割統治の原則、つまり大きな問題は小さな問題に分割するという考え方を知っているはずです。

実際のところ、大半の顧客は実際に動いているものをみて「うーん、これじゃないんだよなー」とか言い出すものです。なら、実際に動いてるものを見せるのは早ければ早いほどよいのです。

====[column] タイムボックス

アジャイルでは、イテレーションに限らず、期間を区切るタイムボックスという考え方を多用します。

たとえば、アジャイルというわけではないですが、アジャイル開発者が好むテクニックに、ポモドーロタイマーテクニックというものがあります。25分作業 + 5分休憩 を1ポモドーロ。3ポモドーロしたら長めの休憩（30分くらい）を入れるというやりかたです。

この時間設定は色々な流儀があります。ただ、やってみるとわかりますが、これはかなり疲れます。8ポモドーロもやればそれなりに疲労がたまることが分かるはずです。それくらい集中できるテクニックなのです。

またタイムボックスはハマり防止にもなります。作業を開始してみたものの、思ったよりもやることが増える、やり方が分からなくて手が止まる、そういったハマり状態が発生することもあるでしょう。

時間をあらかじめ区切る、あるいは一定のタイミングでふりかえりをするようにすればハマりにくくなります。たとえば「1ポモドーロでここまでできなければやり方を見直す」とか「2ポモドーロでこの技術調査が完了しなければ別のタスクに切り替える」などです。

個人的な感覚として、同じ作業を連続して続けると、自分の生産性のスループットが落ちることがあると思っています。場合によっては過集中のように、数時間ぶっ続けですごいモノを書ける（よく神が降りてくるといわれる）こともありますが、使用する脳の領域が偏り続けると、脳のモードが固定化して、作業効率が落ちることがあると感じます。

これらは筆者の経験則なので正しいという確証はありませんが、連続で詰めてやる方がいいか、それともちゃんと切り替えてやるべきかは、ご自身にあったやり方を模索してみてもいいと思います。

それに長時間座りっぱなしは不健康のもとで寿命が縮むという話もよく聞きます。

====[/column]

== ベロシティを使った見積もり

イテレーションは見積もりに役立ちます。

「1イテレーションの間にどれくらいの成果が出せるか」というのは、イテレーションを何回か繰り返せすと、徐々に感覚がつかめてきます。これがベロシティ（速さ）と呼ばれます。

たとえば、1イテレーション目で10個の小さな機能を実装してリリースしたとします。2イテレーション目では12個、3イテレーション目では9個、実装してリリースできたとしましょう。このチームは、小さな機能であれば1イテレーションにつき平均10個程度の実装とリリースができる、という実力が見えてきます。これが、ベロシティです。

=== 規模見積もりと相対見積もり

ベロシティを他人に伝えるための「数値」として表すために、通常、要件（ストーリー）の「規模」による見積もり（規模見積もり）を行います。また、規模の見積もりの際には、相対値での見積もり（相対見積もり）を行います。

たとえば、開発規模の小さい要件を1ポイントという数値で見積もります。ある案件が1ポイントの2倍くらいの規模なら2ポイント、5倍くらいの規模なら5ポイント、逆に、1ポイントよりも規模の小さい要件であれば0.5ポイント、という具合に相対的な規模で見積もりを行います。「時間」や「人月」といった明確な定義ではなく、「ポイント」というややあいまいな表現をあえて使います。

「不確実性コーン」からも分かる通り、人は絶対値による見積もりが苦手であり、未来の話になればなるほど不確実さが増していきます。ただし、規模による相対的な見積もりはやりやすいのです。「あのビルは何メートル？」と聞かれても、答えるのはなかなか難しいものですが、「あのビルは隣のビルの何倍の高さ？」と相対的な倍率で答えることは難しくありません。だからこそ、相対見積もりの倍率を「ポイント」として表現します。要件や作業の種類によって、「高さ」を表すのか「重さ」を表すのか、という測り方の尺度は変わります。だからこそ、「ポイント」という表現で感覚値として表すのです。

ポイントは感覚値だ、といっても、この感覚値は非常に優秀です。自分自身やチームが乗り越えてきた、実現してきた要件の「経験」が土台になるため、チームの成長とともに感覚値がどんどん磨かれていくためです。何度も繰り返し見積もりを行っていくことで、チームの中に見積もりの感覚が養われていき、「この規模なら5ポイントくらいかな」という共通認識が生まれていくのです。

また、「不明瞭」な要件については、ざっくりとした大きいポイントの見積もりをしておくこともできます。現状では要件や実現方法が不明瞭で、どれほどの作業規模なのかが見えないものでも、20ポイント、40ポイントといった大きなポイントとして見積もっておけば、要件全体の規模の透明性を高めることができます。なお、アジャイルな開発現場では、そうした不明瞭な要件は、要件の変更がされないままそのまま実装が決定するとは限りません。リリースした他の機能のフィードバックを受けて、要件が変わるかもしれませんし、そもそも実装されないという選択肢もありえます。だからこそ、不明瞭かつ優先順位の低い要件ほど、見積もりの労力を減らすためにも、ざっくりと見積もりをするだけに留めておきます。そのため、見積もりのポイントには、大きい数値ほど数値の間隔が大きくなるフィボナッチ数列*4（1, 2, 3, 5, 8, 13, …）がよく利用されます。

=== 時間見積もりと絶対見積もり

一方、アジャイルな見積もりにおける「時間見積もり」と「絶対見積もり」についても述べておきましょう。

まず、前提として、時間見積もり・絶対見積もりの難しさを理解しておく必要があります。自分自身で行う作業であれば、時間で見積ったうえで、実際に作業を実施する、ということは理にかなっています。ただし、プロジェクトやプロダクト開発は「チーム」によって行われます。1つの作業（たとえば、APIを1つ作成する）をとっても、人によってかかる時間は異なります。その作業が得意な人が見積もりをしたら、「30分で終わるよ」と言うかもしれませんが、苦手な人が見積もりをしたら、「4時間はかかる」と言うかもしれません。タスクレベルまで落とし込まれているのであれば、タスクに人をアサインしたうえで見積もりをすれば、かなり正確な時間の見積もりを出すことができますが、要件レベルでプロダクト・プロジェクトの全体像を捉えようとした際に、すべての作業に関する時間見積もりを出すためには、正確性を求めれば求めるほど、その見積もり自体にかなりの時間を要します。また、要件が変化する不確実性の高いアジャイルな開発では、詳細に見積もっていたところで、要件そのものが変わってしまうと、また多大な時間を割いて見積もりをしなおす必要が出てきてしまいます。

だからこそ、「要件」のレベルでは規模による相対見積もりを行います。「これくらいの機能なら、全部で30ポイント。チームのベロシティが1イテレーションにつき15ポイントだから、大体2イテレーションでリリースできそうです」という見積もりをします。チームの経験値が溜まれば溜まるほど、チームのベロシティや見積もりへの感覚が磨かれていくため、全体の規模とそれに必要な期間（イテレーション）を素早く、かつ正確に算出できるようになるのです。時間見積もりを採用していると、規模が大きくなればなるほど、このような素早い見積もりは難しくなります。

ここまで読んだ方にとっては、「そこまで言うなら時間見積もりは使わないの？」と疑問に思った方もいるでしょう。実は、アジャイルでは、時間見積もり・絶対見積もりを使う場面も（チームによっては）存在します。それが、イテレーションの中で実装すると決めた要件を「作業（タスク）」として分解した際の見積もりです。

1イテレーションの中で実装すると決めた要件が、本当に実装できそうなのか、という確信をチームの中で得るために、時間見積もり・絶対見積もりを行います。要件を具体的な作業レベルまでに落とし込んで、1イテレーションの中でどのようにチームが活動していくかを計画を立てた際、実際にどれくらいの作業量があるのかを知るために「この作業は30分かかる」「こちらの作業は2時間かかる」というように時間での見積もりを行います。そうして積み上げた作業時間の合計が、チーム全員の作業可能な時間（キャパシティ）の中に納まっているかどうかを確認するのです。

例えば、1イテレーションを1週間で行う、5名の開発者によるチームがいたとしましょう。1日の業務時間が7.5時間だとすると、1イテレーションで最大稼働できる時間は「7.5時間×5人×5営業日＝187.5時間」です。このうち、休憩時間や移動時間、タスクの切り替えの時間、メールや定例会議といった業務時間、チームのための情報共有の時間（イテレーションの計画やふりかえりなど）を除くと、1週間のうち、作業のためだけに集中して行える時間は、せいぜい50%程度です。となると、作業に利用できる最大の時間は「187.5時間×50%＝93.75時間」です。この時間がチームの「キャパシティ」です。チームのキャパシティよりも、作業時間の見積もりの合計のほうが小さければ、自信を持って「要件をすべて実装できる」と言えますし、見積もりのほうがはるかに高いのであれば、実装する要件の数を見直すきっかけにできます。

次のイテレーション、という近い未来の話であれば、大きな変化は起こりにくくなります。イテレーションの中で時間見積もり・絶対見積もりをうまく活用すれば、チームの出せる成果をより正確に見積もることが可能となります。

規模見積もり・相対見積もりと、時間見積もり・絶対見積もりをうまく使い分けていくことが重要です。

=== プランニングポーカー

相対見積もりにおいては、ポイントをみんなの共通認識にするためにプランニングポーカー*5をするといいでしょう。プランニングポーカーは、見積もりの数値を書いたカードを使って、チーム全員である要件についてのポイントを見積もる方法です。チームメンバーそれぞれが自身の思う見積もりの値を提示しあい、その値にズレが生じた場合は、どこにズレが生じているのか、認識相違がある部分はどこか、を話し合います。話し合いの中でリスクを見つけたしたり、逆に素晴らしい解決策を見つけ出したりできますし、要件の不明瞭な部分を洗い出し、表出化させることもできます。

見積もりの数値には様々な流派があります。好きなものをチームで選んで使うのがよいでしょう。

    1, 2, 3, 5, 8, 13, 21, 34, 55 … フィボナッチ数列に従うもの
    1, 2, 3, 5, 8, 13, 20, 40, 80 … 大きな数値を均したもの
    0, 0,5, ∞, ？ … 様々なバリエーション。∞は「規模が大きすぎて見積もれない」、？は「規模見積もりのための情報が不足している」を表明する
    S, M, L, XL … Tシャツのサイズで規模を表すもの

プランニングポーカーを繰り返していけば、次第にチームの中で見積もりに関する共通認識が形成されていき、チームの見積もり精度が上がっていきます。

また、自分一人でも、プランニングポーカーのように作業をポイント化する癖を付けておけば、新しい作業に出会ったときにでも、見積もりをしやすくなったり、その見積もり精度が上がるという利点もあります。

== アジャイルな見積もりとふりかえり

これまでに説明したアジャイルな見積もりは、アジャイルなチームの中でも毎週のように頻繁に行われるイベントの1つです。この見積もりは、経験を積めば積むほどうまくなっていくものではありますが、定期的なふりかえりにより洗練していくことも非常に重要です。

アジャイルにおけるふりかえりの活動は、一般的には「レトロスペクティブ」と呼ばれます。特に、アジャイルの中で最も活用されている「スクラム」という開発フレームワークの中では、「スプリントレトロスペクティブ」と呼ばれ、スプリント（イテレーション）に必ず1度行います。

=== 見積もり方法の改善

（スプリント）レトロスペクティブは、チームの活動全般を見直し、チームのうまくいったところや、強化したほうがよいところを見つけ、チームを成長に導くための活動です。レトロスペクティブの中では見積もり以外にも話すべき事項がたくさんありますが、レトロスペクティブのテーマとして、見積もりを取り扱う場合は、以下の観点で話し合いをしていくとよいでしょう。

==== 規模見積もりの前提について話し合う

規模の見積もりに時間がかかりすぎてしまったり、なかなか意見がまとまらない場合は、見積もりの前提を疑ってみましょう。見積もりの前提というのは、見積もりの対象である「要件」が定まっておらず、そもそも見積もり可能な状態になっていなかったり、要件の内容を理解しておらず、チームに要件について十分な説明ができない、などを指します。このような場合は、チームと顧客との間で要件を明確化するための活動が不足していたり、チームが要件を理解するための活動が不足しているといった問題があります。まずは、チームの内外でどのようにコミュニケーションをとっていけばよいか、を考えてみるとよいでしょう。

==== 規模見積もりの結果について話し合う

要件を規模見積もりした結果と、実際に実装してみて分かった規模感にギャップがあるような場合は、どこにギャップがあったのかを話し合ってみましょう。1ポイントと見積もっていた要件を実装してみたら、実際は5ポイントの要件と同じくらい苦労したのであれば、要件に関する不確定要素を見逃したまま見積もりをしていたり、実装に関するリスクを見逃してしまっていた可能性があります。また、逆に要件を過大見積もりしていたと感じたのであれば、一人の有識者に頼って見積もりをしており、その人が無用なバッファを積んでしまったなど、要件の実現方法に関する情報共有が十分でなかった可能性もあります。

ここで気を付けてほしいのは、見積もりが異なることに対して、個人に責任を追及しないことです。だれか一人に見積もりに対しての責任を追及したら、その人はますます見積もりに対して保守的・防御的なふるまいを見せるようになります。大切なのは、見積もりにはチーム全員が責任を持つ、という意識を持つことです。だれか一人が原因なのではなく、チームのコミュニケーションが不足していることが主な原因ですので、コミュニケーションを活性化・改善するためにどうすればいいかを全員で話し合いましょう。

==== 時間見積もりの結果について話し合う

作業を時間見積もりした結果と、実際にかかった時間を比べてみましょう。この内容については、第2章や第4章で紹介されている見積もりのふりかえり方法に詳しく載っています。

====[column] 見積もりのトレードオフを制する

無限の時間があれば誰でもどんなものでも作ることもできるでしょう、きっと。現実として人間の時間は有限です。

 * 期間
 * 実現する機能
 * クォリティ
 * 予算

現実問題として、大量の機能を最高の品質で短期間で低予算で作れるわけはありません。必ずどれかを犠牲にすることになるでしょう。

これらは相反するところのあるパラメータです。少なくとも全部を満たすことは不可能であると、ステークホルダーに認識させる必要があります。

期間というのは、アジャイルではイテレーション単位で考えるため、固定と考えてもいいでしょう。ただし、イテレーションの集合として、いつまでに何をするのか？という中・長期計画になると、もちろん話はかわります。

どうしても無理をいわれるようであれば予算（人員）を増やしてもらう必要があるでしょう。でも、多くのケースにおいて予算は動かせないパラメータです。

だとしたらあとは、動かせるものは、実現する機能かクォリティです。

クォリティを犠牲にした時、火の粉はあなたのチームに飛んでくるかもしれません。クォリティが低いことを責められる、自責の念に駆られる、モチベーションが下がるなど。

ただし「クォリティ」といっても複数の意味合いがあります。先を見越しためっちゃすごいライブラリを作るというのは、クォリティの高い仕事かもしれませんが、それはほんとに今必要ですか？

イテレーションごとに何を、どれくらいのクォリティで実現するのか？それを考えるというのが実行計画と、その作業時間の見積もりになります。

ちなみにある期間でどこまでの問題を解決するか？をアジャイルではよく「スコープ」と呼びます。変数のスコープと同じようなものですね。

4つのパラメータに関して、どうしても無理なことをいわれる場合は、転職を考えてみるのもよいかもしれません。
====[/column]
