
= 2点見積もりとふりかえりのススメ

//flushright{
@FORTE
//}

もし次のような方がいたら、ぜひこの章を読んでください。

 * 作業するたびに見積もりしてるけど実態に合わない…
 * 見積もりを頑張る意味ないから適当に多めに出しとけばいいと思っている

この章でお勧めする方法を使っても100%完全な見積もりはできませんが、繰り返すたびに徐々に実態に合ってくる見積もり手法を知ることができます。


== 2点見積もりとは?
みなさんが見積もりをするとき、次のように考えるのではないでしょうか？

 * だいたい2日あればできるな、マージンいれて3日にしとこう。
 * うーん、1時間でできそうだけど、サボりたいから6時間と言っておこう。

つまり、見積もった数字を「1点」で表現していることがわかります。
一方で、2点見積もりでは次のように考えます。

 * 最速だと1.5日、どんなに遅れても4日あれば終わるので、1.5日～4日だな。
 * 1時間で終わると思う、問題があっても聞けば行けそうだからハマっても3時間だな（1〜3時間）

このように、必ず見積もりを「2点」で表現します。
この章では次について解説します。

 * 2点見積もりの詳細
 * 2点見積もりのお勧めポイント
 * ふりかえりの利点とそのやり方


なお、この章では個々のケースに対する具体的な見積もりの方法は説明しません。たとえばRuby on Railsでログイン画面を作るのと、iOSのSwiftでログイン画面を作る場合の見積もり結果は大きく異なります。また、実行する担当者のスキルレベルや過去のコード資産の有無によっても変わってきてしまいます。そのため、あくまで2点見積もりという手法に関してのみ説明していきます。

== 2点見積もりの詳細
2点見積もりでは次の2点で見積もりを表します。

 * 最小見積もり
 * 最大見積もり

まずはそれぞれの定義を確認してみましょう。

 * 最小見積もり

最小見積もりとは@<b>{そのタスクが完了する最速の工数}のことです。マージンなどは含まずに、いま見えている作業を最速で完了する前提で積み上げていった結果、導き出される見積もりのことです。

 * 最大見積もり

最大見積もりとは@<b>{そのタスクが確実に完了できる工数}のことです。マージンを含め、その工数より遅れることは絶対ないと言い切れる、絶対にここまでには終わらせることができるという見積もりです。

=== 最小と最大とふたつの見積もりが必要な理由
では、なぜふたつの見積もりが必要なのでしょうか?筆者は次の理由がポイントだと考えています。

 * ふりかえりがしやすい
 * 見積もり精度を上げやすい
 * コミュニケーションが楽

ひとつずつ見ていきましょう。

 * ふりかえりがしやすい

ここでいうふりかえりとは、実際にタスクを消化してみた実績と、見積もりを比較することにを指します。具体的なふりかえり手法に関しては後述しますが、見積もりをふたつ用意することでふりかえりがしやすくなります。

1点見積もりの場合、実績と見積もりを比較した時は次のどちらかになる場合が多いです。

 * 実績が見積もりを超過した
 * 見積もり以内の実績となった

そして「見積もり以内の実績となった」場合はふりかえりの際に話題とならず、一方的に問題なしと判定され、そのまま流されることがほとんどです。ですが、見積もりは@<b>{なるべく実体にあった値を出すこと}を求められます。そのため、見積もりより少ない実績となった場合も、「なぜ見積もりより少なくなったのか」について検討しなければなりません。そうでなくては、なるべく実体にあった値を出すことができなくなってしまいます。

2点見積もりでは、最小見積もりが「そのタスクが完了する最速の工数」という定義になっています。もしこの最小見積もりより実績が少なくなれば最小見積もりの定義に当てはまらないため、ふりかえりによる改善の対象となりやすくなります。

ここで重要なのは@<b>{ふりかえりによる改善の対象となりやすい}ということです。1点見積もりで見積もりより実績が少なくなった場合は、誰かが「見積もりより小さいことは問題だ」といわなければ改善の対象になりにくいでしょう。ですが、2点見積もりでは最小と最大のふたつの定義があることによって、実績が最小と最大のあいだのどの位置にあたるのかを考えやすくなります。そのため、強く意識しなくてもふりかえりがしやすいと思います。

 * 見積もり精度を上げやすい

前述のふりかえりの話にも関連していますが、ふりかえり結果から見積もり精度を上げやすいのも特徴と思います。1点見積もりでは、実績が見積もりを上回ったか、下回ったかのどちらかしかありません。2点見積もりでは最小以下、最小と最大の間、最大以上の大きく三つに分かれます。また最小と最大の間でも、最小寄りなのか最大寄りなのかによって次の行動を変えられます。これだけ評価軸を増やせるのは、2点見積もりを用いる利点だと思います。

たとえば1点見積もりでは、実績が見積もりを超過した場合の対応はまちまちでしょう。「まぁ見積もりだからねー仕方ない」と言って特に何も対応しないケースもあるでしょうし、「じゃあ次回から少し見積もりを増やそうか」みたいな表面的な対応にしかならないケースもあると思います。

しかし、2点見積もりでは見積もりの定義が明確です。最大見積もりの定義は「そのタスクが確実に完了できる工数」なので、確実に完了できる工数を超過していることになります。そのため、事前に検討できていない項目があったのではないか、見積もり内容に問題があったのではないか、タスク消化中に非常に大きな問題が発生したのではないか、など単に不確実な1点見積もりを超過した場合に比べて考えやすいと思います。


 * コミュニケーションが楽

2点見積もりには、見積もりした数値についてのコミュニケーションが楽になるという特徴があります。これは、導かれる数値の定義がはっきりしているからです。1点見積もりではその数値の定義があいまいなので、ギリギリの見積もりなのか、マージンを含んだ見積もりなのかもわかりません。そのため、毎回定義を確認する必要があります。

特にふりかえる際のコミュニケーションが楽になります。見積もりをしたときに、「その見積もりがどういう定義の見積もりなのか」をふりかえりのときにはよく覚えていないことも多いと思います。実際問題として、個々の見積もりひとつひとつに対して、マージンが多めだったかどうか、ギリギリの見積もりだったかどうかなど、いちいち覚えていられません。特に自分の見積もりならまだしも、他の人も含めてその定義を確認して管理していくのは非常に骨が折れます。

その点、2点見積もりなら最初から定義が決まっているので、過去のことを思い出す必要はありません。決められた定義のまま扱えば大丈夫です。チーム内や組織内でコミュニケーションを取るときにも、認識の違いが起こることはありません。勘違いや前提の違いで手戻りが発生しにくいのはよいポイントだと思います。見積もり自体が不確実なものなのに、それを運用する中に不確実性があると非常に大変です。少しでも不確実性が減らせると、よりよい見積もりができると思います。



=== ふたつの見積もりが必要な理由のまとめ
ここまで次の三つを必要な理由として説明してきました。

 * ふりかえりがしやすい
 * 見積もり精度を上げやすい
 * コミュニケーションが楽

2点見積もりでは、見積もりをふたつの定義に分けることで「自然とふりかえりがしやすくなる効果」「ふりかえりによる精度向上」「コミュニケーションが楽になる」と解説してきました。1点に対して2点にすることによる利点がお分かりいただけたかと思います。


== 事例で見る2点見積もりの利点
次は事例による2点見積もりの利点を紹介していきます。この事例は筆者が実際に業務で使用したものです。

 : 1点見積もりと組み合わせやすい
これまで見てきたように、1点見積もりと2点見積もりは手法が異なりますが、2点見積もりには1点見積もりと組み合わせやすい特徴があります。実際に筆者が業務で2点見積もりを実施していた時は、チーム内で2点見積もりをやっているのは私だけでした。そのため、リーダーやメンバーに見積もりを開示するときは1点見積もりに換算する必要があります。このとき、2点見積もりであれば、最小見積もりと最大見積もりのちょうど中間の値を報告したり、自信があるときは最小見積もりを報告し、怪しい時は最大見積もりに近い値を報告できます。これなら2点見積もりの利点は活かしつつ、チームと共同作業できます。自分としては2点見積もりを無理なく続けていけるので、その効果をメンバーに無理なく見せることが可能です。

このように、チーム内で一部のメンバーが2点見積もりを使用していても、1点見積もりと組み合わせて運用することができます。新しいプラクティスは導入するのにハードルが高いことがありますが、これなら既存のやり方と衝突しないのですぐにでも始めることができます。


ただし、チームメンバーに対して単純に2点見積もりの採用を伝えようとすると、うまくいかないことがあります。単に2点で見積もった内容だけを伝えると、「いつもの見積もりにマージンを足しているだけ」と受け取られてしまい、変わり映えがしないものに見えてしまいます。そのため2点見積もりをチーム内に伝える時は、方法や定義よりも「今現在のチームに対してどういったメリットがあるか」を伝えた方がよいと思います。もちろん、まずは自分で試してみて実感してみるのが大切です。

 : モチベーションの持続
見積もりを正確に行い続けることはできません。どんなに経験を積んでも、ズレる時はズレます。特に完璧主義の人（またはその傾向がある人）は、外れることがあると分かっていても気にしてしまい、ストレスを感じるものです。特に1点見積もりは1点しかないので、ピッタリと一致することはまずありません。多少ズレてしまった見積もりを、「ほぼピッタリだった」と自分を慰めた経験がある方も多いと思います。そうしてズレることに慣れていくと、見積もりをする意義が見出せなくなっていきます。そして、自分のための見積もりというよりも、「いわれたから提出するため」だけの無意味な儀式や数字遊びになっていってしまいます。

2点見積もりは、最初からブレることを前提にしています。つまり最小見積もりと最大見積もりという2点を取るため、その間に入れば「まずは想定通り」となります。つまり見積もりとしては、高い確率で自分の想定通りとなる仕組みです。そういう意味で、大幅に外れることが少ないので、見積もりに対して高いモチベーションを保つことができます。また、最小見積もりをストレッチ目標として意識することで、より正確な最小見積もりを出すモチベーションにもなります。すぐ到達できる目標よりも、できそうでできないレベルの方がモチベーションは維持しやすいと思います。


そして実際にも、筆者は見積もりを守るためにモチベーション高く作業を行うことができました。自ら宣言した最小見積もりを達成するために、また最大見積もりは超過しないようにというモチベーションが働きます。そのため、作業自体もモチベーション高く行うことができます。2点見積もりでは、実体験として見積もりも作業も、モチベーションを高く維持して作業することができたのです。

 : タスク分割のしやすさ
最小見積もりを考える際、まずそのタスクを最速でこなせる見積もりを考えます。そのため、そのタスクを分解して「この作業ならタスクが完了する」というレベルまでタスクを分割する必要があります。「これはよく分からないけど後で調べよう」では「最速」とはいえません。よって、調査が必要なタスクは分割することで、より正確な見積もりを出せるようになります。筆者の経験上、1点見積もりでは「曖昧な部分はマージンとして多めに見積もりする」という対応になりがちです。結局大きな数字の一部となってしまったり、複数の不確実性を組み込んだ見積もりとなってしまいます。これでは見積もりそのものが当てにならないものになってしまいます。

また、大きすぎるタスクを分割するキッカケにもなると感じました。最初見積もりを考える時には、やることを細かく考える必要があります。そのとき対象のタスクが大き過ぎると考えるのが大変なので、分割するようになります。分割した結果、曖昧な点が洗い出されて早く問題に気付くことができました。また小さいタスクほど正確な見積もりがしやすいので、結果として見積もり全体の正確度を向上させることができました。

 : ポジティブな目標が得られる
1点見積もりでは、最終的に遅延しないことを目指した見積もりになりがちです。というのも、見積もりに対する評価軸が見積もりを超えるか超えないかしかないからです。そのため、見積もりを超えないように余裕を持った見積もりになりがちです。

2点見積もりでは、最小工数が目標になります。最小工数は最小で終わる定義として見積もりしているため、これを達成するために努力できます。また、最小見積もりを超過してしまっても、次は最大見積もりを目標に作業することができます。これにより、作業中は常にポジティブな目標を持って作業することができます。1点見積もりでは見積もりを超過しないようにするための見積もりだったので、どちらかといえばネガティブな印象でしたが、2点見積もりではそれがポジティブな印象に変わったと感じました。


== 2点見積もりの欠点
ここまで、筆者の事例による2点見積もりの利点をお伝えしてきました。実際に2点見積もりをやってみると、多くの利点を感じることができました。


では逆に、欠点についてもお伝えしたいと思います。とはいっても、欠点というほどの欠点は思いつきませんでした。やってみる前は単純に見積もり作業が2倍になるのかと思っていましたが、そんなことはありませんでした。1点見積もりも2点見積もりも、最初にその作業が完了するまでに必要な最小限の工数を考えます。そこからマージンや不安な部分を加味した見積もりにします。これは、1点見積もりでも不完全ながら2点見積もりのようなことをやっていたということだと思います。そのため、筆者の場合は作業量が2倍になるということはありませんでした。最小工数を出すために細かくタスクの分割などをするようになりましたが、これはより正確な見積もりを出すために必要なので、欠点とまではいえないでしょう。


実際にやってみてそこまで明確な欠点は感じませんでした。


== ふりかえりのススメ

単純に2点見積もりを使うだけでは、その効果を最大限に発揮できません。この見積もり方式はふりかえりをしてこそ、真価を発揮すると思っています。
そのため、この章では2点見積もり結果のふりかえり方を説明していきます。

=== ふりかえりのメリット

まずは具体的なふりかえりのやり方の前に、そのメリットを説明していきます。

 :  補正による精度向上

  ふりかえりをすることで、見積もりがズレた場合でも次回の見積もりにそれを活かすことかできます。また、1点見積もりと違い2点見積もりの場合はより細かく分析可能です。詳細は後述しますが、1点見積もりでは「見積もりより早いか遅いか」くらいしか分析できません。ですが、2点見積もりではさらに細かく分析を行い見積もり精度の向上を図ることが可能なのです。

 : 土壇場の裏付け

  「本当にその工数でできるの？」

見積もりをしていて、こんなことをいわれたことはないでしょうか。そんな質問に対して、これまでは明確な根拠もなく、今までの経験で乗り切ってきたと思います。ですが、2点見積もりとふりかえりを続けることで、こんな質問にもこう答えられるようになります。


  「この半年間の実績をふりかえると見積もりの的中率は80%以上です。ご心配なら少しマージンを入れますが、どうしましょうか？」

  「類似した過去の見積もり結果を確認すると、当時は見積もりを超過していたので、今回はその反省を踏まえた見積もりになっています。」

  いかがでしょうか。単に「経験があるから大丈夫です」と答えるより説得力がありませんか？

 : PDCAサイクルを回せる

見積もりをする（Plan）

タスクをこなして実績を取る（Do）

ふりかえる（Check）

次の見積もりに結果を活かす（Action）

ふりかえりによって、見積もり精度を向上させるためにPDCAを回すことができます。PDCAサイクルは1点見積もりでも可能ですが、前述した補正のしやすさを考えると、CとAがやりやすい2点見積もりのほうが向いているといえるでしょう。

そしてやりやすさは継続の大きな助けになります。誰だって面倒なことを繰り返したくはありませんよね。

 : 自信と信頼貯金

　これまでのメリットにより、見積もりに自信が出てきます。つまり見積もりで迷うこと、悩むことが少なくなります。人間は決めることに多量の労力を使う生き物だといわれています。見積もりは判断と決断の連続なので、これを自信を持って（迷わず悩まず）行うことができれば、本来労力をかけるべきタスクの実行に集中することができます。また、見積もりの正しさはあなたの信頼貯金として蓄積されていきます。

 繰り返しますが、常に100%正しい見積もりなんてあり得ません。2点見積もりでも実績とズレることは当然あります。ですが、2点見積もりとその実績、そしてふりかえりの結果は、それでもあなたを信頼してもらえる材料となることでしょう。

== 見積もり内容と実績を記録する

ふりかえりをするためには、まず実績を記録しなければなりません。この章では実績のとり方について説明していきます。具体的には次のような項目を残します。

 * タスク名
 * タスク種別
 * 最小見積もり
 * 最大見積もり
 * 実績
 * バッファ
 * バッファ消費率

すでに説明した、最小・最大見積もりを除く項目をそれぞれ説明していきます。

 : タスク名

  　タスクの名称です。

 : タスク種別

  　タスク種別は、そのタスクの発生種別を指します。もともと計画されていたものなのか？計画後に新たに追加された物なのか？割り込みなのか？そういったことを記録しておくことで、ふりかえり時に見積もりと実績の乖離を分析する一助とします。

 : 実績

  　実際にそのタスクの実行にかかった時間を記載します。

 : バッファ

  　バッファは「最大見積もり - 最小見積もり = バッファ」で計算します。

 : バッファ消費率

  　バッファ消費率は、実績が最小見積もりを超えた割合となります。たとえば次のようになります。

 * 実績=最小見積もりであれば0%（バッファ消費なし）
 * 実績=最大見積もりであれば100%（すべてのバッファを消費した）
 * 実績=バッファ/2であれば50%（バッファの半分を消費した）


見積もりに対して、これらを逐一記録していきましょう。面倒だし続けるのはかなり億劫だと思いますが、ふりかえりによる効果を享受するには必要な作業です。次のように工夫して、継続してやっていくようにしましょう。






== 実績記録における工夫の例

 : 既存ツールと組み合わせる
    　筆者は既存の工数管理ツールのメモ欄に、次のようなフォーマットで記録していました。

      「最小,最大,実績,メモ（見積もりとズレた理由や気づきなど所感）」

    これを月に一回csv出力して、Googleスプレッドシートに記録していきました。

    筆者は手作業で行っていましたが、自動化すればさらに楽になるはずです。

 : 仕事にしてしまう（行う目標を作る）
    　筆者は、2点見積もりによる見積もり精度向上を「仕事の一環だ」として会社に表明して行っていました。具体的にはMBO（Management by Object）という目標管理制度の一環として、半年間の活動目標に挙げたのです。これによりダレることなく、アウトプットする目的を作って実績をつけ続けられました。

    読者の方で「うちの社にそんな制度ないよー!」という方がいらっしゃるかもしれません。ですが、チームに対して「今期はこういうことをやる！」という宣言でもよいのです。なんならインターネットに対して、自分のブログなどで公開してもよいでしょう。もちろんこのときはタスク名など、公開してはマズイ情報は隠して公開しましょうね。

 : 忘れちゃう対策
    　人間誰しも忘れてしまうもの。見積もりはしたけど実績をつけるのを忘れてしまった……。溜まっていた実績をつけようと思ったらかかった時間を忘れてしまった……。
    そうならないように、リマインドしましょう。

     * 付箋に書いてディスプレイに貼る（TODO管理）。
     * 見積もり仲間を作って声を掛け合う。
     * SlackでBotにリマインドしてもらう。

    筆者は、SlackでBotにリマインドしてもらうことをお勧めします。会社でSlackを使っていなくても、自分のワークスペースを作ってリマインドしてもらいましょう。メッセージの中に、Googleスプレッドシートなど記録している対象のリンクをつけておけば楽ですね。

== ふりかえりのやりかた

それでは具体的に、ふりかえりのやり方を説明していきます。
まずは見積もり内容と実績を比べてみましょう。バッファの消費率を見ることで、改善すべきポイントが明らかになってきます。
なお見積もりはズレるものなので、最大見積もりを超過しても必要以上に気にすることはありません。ですが、ふりかえりをしなければ次に繋がりません。一致してもズレてしまってもふりかえりを継続していきましょう。


 : 最小見積もり以下で終わったとき
    　早く終わったからOKとなりがちですが、問題があります。思い出してください、最小見積もりの定義は「達成可能か不可能か、ギリギリの挑戦的な日数」です。ギリギリなのに早まるということは無意識にマージンを取ってしまっていることになります。マージンはバッファとして積むものなので、最小はあくまでギリギリを攻めましょう。

 : 常に最小見積もりと同じ（あるいは近しい）
    　こちらも問題があります。最小見積もりは「達成確率は20%」です。常にそれが達成できるということは、手を抜いた最小見積もりになっている可能性があります。最小はあくまでギリギリに。最小見積もりは達成できないことが普通なのです。また自分のアウトプットを過小評価していると、実績は最小見積もりに近くなります。最小見積もりはもっと攻めた見積もりにしても大丈夫。次回の見積もりに反映していきましょう。

 : バッファの中央値と同じ（あるいは近しい）
    　素晴らしい見積もりです！見積もりしたとおりの結果になっているといえます。このときもただ◯を付けて終わりにするのではなく、見積もり時に気をつけたことや、ふりかえりを行って正しかったと感じたポイントをメモしておきましょう。それらの暗黙知が形式知となって、あなたを、チームを、プロダクトを救っていくでしょう。もしそれらがアウトプットできない場合、当てずっぽうの見積もりになっている可能性があります。もう一度自分の見積もり内容をふりかえってみましょう。

 :  常に最大見積もりと同じ（あるいは近しい）
    　毎回「これを超えたら恥ずかしい日数」に近づくということは、なにか見積もりをする際に考慮が抜けてしまっている可能性があります。タスクの消化中に「あ!あれもやらなきゃ!」となっていことはありませんか?次回はそれを考慮した見積もりにしていきましょう。または実績をつける際に休憩や割り込みも含んでいませんか?見積もりのときに休憩や割り込みを入れないように、実績にもこれらは含みません。見積もりと実績は同じ定義で取らないと意味がありません。一度確認してみましょう。それでも最大に近いという場合、見積もりに余裕がなさすぎるのかもしれません。つまり自分のアウトプットを過大評価している可能性があります。実態に合わせて見積もりを補正していきましょう。

 :  最大見積もりを超過した
    　「これを超えたら恥ずかしい日数」ですので存分に恥ずかしがりましょう。その次は落ち着いてふりかえりましょう。なにか大きな見落としがあったのではないでしょうか?たとえば、次のようなことはありませんでしたか?

     * 使えると思っていたライブラリーが使えなかった。
     * コピペで使い回す予定のコードが使い回せなかった。
     * 書けると思ったSQLの性能が要件を満たせず書き直すハメになった。

    これらはすべて、見積もりに不確定要素を含んでしまったために起こります。不確定な部分は調査タスクとして別タスクに切り出しましょう。そうすることで、問題を分割して個々の見積もり精度を上げることができます。また不確定な部分は得意な人に切り出すことができます。見積もりが上手くいかない部分は、得意な人にまかせてしまうのも手です。そしてあとでその人に知見を分けてもらうとよいでしょう。

== 定期的にふりかえる
  ふりかえりは定期的に行いましょう。
  思いついたときにやっても次に活かす機会が少なくなりますし、効果が見えづらくなるのでモチベーションが維持できません。
  可能ならタスク毎にふりかえりをしたいですが、粒度によっては難しくなります。
  そのため、1日ごとにふりかえるのがよいでしょう。
  1週間や1ヶ月だと期間が長すぎて改善する機会が少なくなってしまいますし、ふりかえる対象が多すぎて大変になってしまいます。

  大変なことは続きませんよね？
  なるべく楽で自分にあった方法を考えていきましょう。


 : ふりかえりは仕組みに組み込むと楽
  　定期的にふりかえりを行う工夫として、仕組みに組み込んでしまうと楽ができます。

  たとえばチームの朝会で前日のふりかえり結果を共有するとか、スクラムであればスプリントレトロスペクティブで行うなどです。
  特に1人で行うとモチベーションを維持するのが難しいので、同僚やチームを巻き込んでやっていくのは効果的です。
  逆に巻き込むのに労力が必要そうであれば、1人でやっていくとよいでしょう。

 : 見える化する（グラフ化や色付けなど）
 
 見積もりと実績はGoogleスプレッドシートやExcelで管理するとわかりやすいですが、さらに見える化する工夫もしていきましょう。


  たとえばバッファ消費率をグラフ化することで、消費率の推移を見たり、総タスク数に対しての割合を見たりすることができます。
  これらによって直近で気が抜けていないか、見積もりに対してなにか問題が起きていないかなどを確認していきましょう。
  
  また、グラフではなく表の場合でも、バッファ消費率で色分けすることで見える化できます。
  たとえばバッファ消費率が30%未満は黄色、バッファ消費率が30～80%未満は緑、バッファ消費率が80%以上は赤とすることで、見積もりが上手く行っているのか問題があるのかを一目瞭然にできます。
  色ではなく絵文字などでもよいでしょう。

  GoogleスプレッドシートであればGoogle Apps Script（GAS）を活用することで、特定のしきい値を超えた場合は自動アラートを上げたりすることができるかもしれません。

  自分が楽しく、そして楽にできるように工夫していきましょう。

 : ストレッチ目標を設定する
  ふりかえりが定着し高確率でバッファ消費率50%が達成できるようになったら、次はバッファ消費率30%を目指していきましょう。
  当然ですが、タスクは早く終われば終わることに越したことはないのです。
  そのためなるべく早く終わるように工夫することを考えていきましょう。

  ただし、ただ早くすればよいというものではありません。
  例えばテストの手を抜けば早くなるかもしれませんが、それでは後工程に問題が出てしまいます。
  必要なことを全てやった上で早く終る工夫をする。
  それがストレッチ目標なのです。

== 事例
それでは最後に、事例として筆者が2点見積もりを運用した際の事例と、とあるゲーム開発会社で運用された例を紹介します。


=== 筆者の事例
  既存のタスク管理ツールのようなものがありましたが、それでは実績しか管理していませんでした。
  そこでそのツールのメモ欄に、「最小,最大,実績,メモ（見積もりとズレた理由や気づきなど所感）」のようにメモを入れて見積もりと実績を取っていました。
  1年目の後半にそれを続けた結果、見積もりの精度は上がり、著者への信頼貯金も増えたのか、2年目からはサブリーダーへの抜擢を受けました。

  そのときの経験から、注意点と失敗談をお伝えします。

 : タスク粒度は細かい方がよい
    　タスクの粒度が細かいほうが見積もりしやすいですし、正しい結果になりやすくなります。
    そのため、モチベーションが上がり続けやすくなります。

 : 割り込みや突発作業は実績から外す
    　実績はあくまで見積もりしたタスクに対して行うもの、です。
    なので、見積もりしていない作業、たとえば障害対応やユーザー問い合わせ対応などの割り込みや突発作業は実績から除外しましょう。
    これにより、見積もりに対して正確に実績をふりかえられるようになります。

 : 調査タスクも見積もりしよう

    　調査は結果が出るか出ないわからないので見積もりしないケースがありますが、筆者は見積もりをしたほうがよいと思います。
    この場合、結果が出るまでをタスクとするのではなく、たとえば公式ドキュメントを読むとか、ここにログを入れて動かしてみるとか、詳しそうな人に聞きに行ってみるとか、そういった作業に対して見積もりをしましょう。


    そして見積もりと実績に乖離がある場合は改善していきましょう。

 :  ふりかえりが月に1回は長すぎた
    　毎日実績は入れていましたが、ふりかえりは月に1回にしていたので、あまり次の見積もりに活かせていなかった気がします。
    毎日アウトプットする形でふりかえりをすれば、もっと精度のよい見積もりができたでしょう。

 : 上手く行ったときの知見も貯めればよかった

    　見積もりがズレたときにしかその理由を考えていなかったので、正しい見積もりを再現する知見が溜まりづらかったと思います。
    また、そういった知見が溜まらなかったため、チーム内へのフィードバックも積極的にできていませんでした。

 : もっと自分に対してもチームに対しても見える化すべきだった
    　2点見積もりをやっていることはチーム内に伝えていましたが、グラフや色分けした表を見せることでメリットを伝えたほうが良かったなぁと思います。
    またそういったアウトプットを通して課題や問題点に気づけたりするので、チーム内に対しての定期的なアウトプットはするべきだったと思いました。


=== とあるゲーム開発現場であった話
  2点見積もりを採用していたとあるゲーム開発現場で、次のようなやり取りがあったそうです。

  メンバー「〇〇（リーダー）さん、僕、今日はもう帰っても大丈夫なんですね！」

  その開発現場は今までがむしゃらに目の前のことを片付けていた現場でした。
  そのためいつ終わるかわからない開発を続けており、わからないので残業や休出が日常化していました。

  しかし、2点見積もりとふりかえりを含めたさまざまなプラクティスを導入した結果、今日頑張らなくても期日までに終わる確度の高いスケジュールが作成できたのです。
  そしてそれがメンバーにも周知されており、メンバーが自信を持って休んでも大丈夫と判断できる状態になったのです。

  どんなにリーダーが立派なスケジュールを引いても、その見積もりが正しい自信がメンバーになければこの発言は出ないでしょう。
  2点見積もりとふりかえりは、メンバーにこのような自信を与え、チームに確度の高いスケジュールを提供し、プロダクトに安定的なリリースをもたらす一助となります。

== おわりに

いかがだったでしょうか?
2点見積もりとふりかえりについて、少しでも良さそうだな、と思って頂ければ幸いです。

この手法は一人でもできて、いつでも辞められる手法です。費用はかかりません。
そのため、皆さんも2点見積もりを試してみてください。そしてぜひともその経験を発信してください。
それがあなたの、チームの、そして見積もりに困っている誰かの役に立つことと信じています。

最後に筆者が大事にしているジョナサン・ラスマセン氏の言葉を引用して終わります。

//quote{
もっとうまくソフトウェアを届けるやり方を探し求め、分かちあい、見出していきましょう。
でもあんまり深刻に受け止めすぎないで。
楽しみながらやっていきましょう。
//}
