= 温かみのある見積もりをする方法

== はじめに
この章では、エンジニアの数も少なく、事業もエンジニアリングがメインではない、小さな会社における見積もりについて紹介します。
小さな会社では、要求であがってきたことをそのままドライに見積もるだけでは、うまくいかないことも多々あります。
エンジニアだけではなく、暖かみのある見積もり（依頼をした人も安心することができる見積もり）をするための、日頃の心構えについて述べていきます。

この章で想定する会社の規模感は以下のとおりです。

 * 20人弱の小さな事業会社
 * 自社でサービスを運営しており、社内システム担当がいる
 * 少し歩けば、全員と話をすることが可能な広さ
 * 社内のコミュニケーションは比較的とりやすい状況である
 * 小さな会社なので、細かい要件定義をする人員がいない

このような会社で働いているエンジニアに課せられている仕事は、社内で上がった要望をベースにシステムの改修を行うことです。
社内で上がった要望は、決して細かい仕様まで決められているわけではありません。
日々の業務の中で課題と感じたことに対しする、素朴な要望であることがほとんどです。
その、要望に対して何も考えずに見積もりを行い実装をすることは、果たして暖かみのある見積もりなのだろうか？
否、 @<em>{見積もりをする前にもっとお互いのことを理解して、温かみのある見積もりをするべきである}というのが本章で伝えたいことです。

== 準備編：「隣のあの人は何の業務をしているの？」
社内の隣の人からシステム改修の依頼があったときのことを考えてみます。
隣の人とはいえ、所属しているチームや部署が異なり、普段行っている業務を完全に把握することはできていません。
果たして、依頼をしてきた人の業務を理解すること無しに適切なシステム改修ができるのでしょうか？
完全に理解することは不可能だとしても、少しでも知っている状態で見積もりを行わないと暖かみのある見積もりができないかもしれません。
本節では、そんな不安を解消するために、理解をするべきポイントをまとめました。

=== 業務フローを知る
社内システムというのは、業務フローに強く結びついていることが多いです。
改修担当者自身が、改修を依頼してきた人の業務フローを理解していないと、画面遷移の仕様決定や詳細機能の見積もりが困難になります。
さらに、要望を出している側も業務フローが曖昧になってしまっていることもあるため、一緒に整理をしていくことをおすすめします。
整理をする観点としては、

 * なぜ、そのような業務フローになっているのか？
 * 今回の改修内容に付随して、不足している機能はないのか？
 * 既存のシステムに不要な機能はないのか？

といった点です。これらの項目を確認することで業務フローが整理され、必要な機能が明確になります。

=== 業務内容で困っているポイントを知る
改修依頼ということは、少なくとも現状のシステムでは困っていることがあるはずである。
現行のシステムを使う中で、どのようなことに困っているのか詳しくヒアリングをしておくようにしましょう。
改修依頼の内容以外にも、 @<em>{実は、それも困っていました！}そんな話が聞けるかもしれません。
このポイントを知らないまま見積もりをして、実装をしてしまうと「実はここの部分も修正したかった」ということも出てきてしまうかもしれません。
これでは、見積もりはできているのかもしれませんが、暖かみのある見積もりにはなっていないと思います。
改修内容に関連して、まとめて解消ができる問題があれば、それらも改修依頼としてあげてもらうようにしましょう。

=== 自分がやったら何ができるのかを考える
困っているポイントを聞いたら改修内容を、自分事として考えてみましょう。
改修したシステムを使って、自分がその業務をやるとしたらどうなるだろうかという観点で考えてみて、
「ここは自動化できるかも」「ここの表示は邪魔だろうなぁ」といったことを考えてみます。
すると、開発をするシステムのイメージが具体化して見積もりがより正確にすることができるようになります。
さらに、自分事になることで依頼者が気が付かなかった業務改善を思いつくかもしれません。
暖みのある見積もりでは、ただ単に見積もりをするのではなく、業務改善を適切な工数で最適なシステムで成し遂げるという気持ちが大切です。

=== その人がやるなら何が必要か考える
自分事にしてみるという話をしていましたが、最終的には利用をする人の事を考えて実装をする必要があります。
依頼者が普段行っていること、使っているツール、得手不得手（物事を詳細に確認するのが苦手、全体感を一覧で見るほうが得意）といったところを意識する必要があります。
社内のメンバーといえども、ユーザーファーストの考え方を持って何を作るのかを意識すると、暖かみのある見積もりになると思います。

== 説明編:見積もりの妥当性を誰にでもわかるように示す
小さな会社で働いている場合、エンジニアのチームの人数が少ない場合が多いです。
そのため、相見積もり（一人の見積もりだけではなく複数人で見積もりをして比較検討すること）をすることができず、見積もりが1人のエンジニアの判断で決まってしまうことがあります。
その際に、必要となってくることは、エンジニアが出した見積もりが妥当なものであるということを依頼者が納得できるようにすることです。
これは、極端な話になりますが、すべての案件を2倍の時間を見積もることで、空きの時間を作ることも不可能ではありません。しかし、これは暖かみのある見積もりであるとは言えないと思います。
自分で決められるからこそ責任を持って依頼者に対して見積もりの妥当性を示す必要があると思います。

=== 要件を理解する
大前提のような話になるかもしれないのですが、そもそも要件が理解できていないのであれば見積もりができません。
要件が固まっていないところがあったら必ず要件を固めましょう。
どんなに小さなことでも曖昧に進めるよりもしっかりと要件を固めて見積もりをしたほうが良いです。
要件の固まっていないところは、見積もりの精度も上がらず、暖かみが無い見積もりとなってしまいがちです。
お互いの幸せのためにも、要件を固めるところは妥協をしないようにすると良いと思います。

=== なぜ、工数がかかるのかを説明する？
依頼者にとって工数と言うものは少なければ少ないほどよいはずです。
そのため、見積もりの妥当性の説明については基本的に @<em>{何故、そんなに工数がかかるのか？}を説明することになると思います。
「この機能を実装するためには、これだけの時間がかかります何故ならば〜」ということを丁寧に説明できるようにしておきましょう。
極稀にですが、依頼者が想像していたよりも、短時間で実現することができる機能があります。その場合も @<em>{何故、たったそれだけの工数でできるのか？} ということも説明できるようにしておくと良いと思います。
聞かれないと思っていても、依頼をした人のイメージから工数が離れそうなときには丁寧に説明できる様にしておくだけで暖かみのある見積もりになると思います。

=== 他の機能開発との難易度の差は？
工数見積の妥当性を説明するための方法として、過去に開発した機能と比べてどの程度の難易度なのかを説明する方法もあります。
改修担当者からすると、設計内容や影響範囲などを把握しているため、工数に対する妥当性があるように見えますが。
依頼者側からすると、それがわからないため、妥当性を判断することができません。
その場合に使える方法として、過去の開発した機能と比較をして説明をするという方法があります。
「過去の改修時に似たような機能を実装するために、このくらいの工数が必要でした」
といった説明をすることができれば、依頼者側からしても暖かみのある見積もりになるでしょう。

== 弁明編:見積もりから外れるときは必ず説明する
見積もりが終わり、開発に取り掛かった後も温かみのある見積もりから外れてしまう場合があります。
それは、実工数が見積もりから外れてしまう場合です。
その際には、なぜ、見積もりから外れそうなのかをしっかりと説明するようにしましょう。
どんな開発においても見積もりから外れることはありえます。大切なのは、そうなった場合にどのような対応を取るのかということです。
見積もりが間違っていた過去を精算し、次の見積もりから再び暖かみのある見積もりをするために必要なことをまとめました。

=== 要因は何か？
実工数が見積もりから外れてしまう要因は何かをしっかりと分析をしましょう。
そして、それを依頼者が分かる形で説明をする必要があります。
要因として考えられることは様々ですが、良くある例としては次のようなことがあると思います。

 * 使用しようとしていた技術が想定の動作をしなかった
 * 人員の増減などにより、見積もり時と実装者の条件が変更される

どちらの理由も、依頼者側からすると詳しくはわからない要因なので、それぞれどのように問題となっているのかを説明できるようにしておくと良いでしょう。


=== 期日を伸ばすか？何かを削るか？
実工数が見積もりから外れてしまうことが判明したときに、そこで開発をやめてしまう訳にもいきません。
依頼者に対して謝罪すると同時に、どの様に見積もりから外れた要因を解決をしていくのかを考える必要があります。
多くの要因において、次の2つの解決策が考えられると思います。

 * 実装予定の機能を全て実装するために期日を伸ばす
 * 実装予定の機能の一部を削り、必要最低限な機能を実装する

前者の解決策が一般的なのだとは思いますが、どんなときでも期日を伸ばすことができるとは限らないと思います。
そういう場合は、機能を削ることで対応をすることを余儀なくされます。
それまでに暖かみのある見積もりを行っている場合は、業務フローの理解などもしていると思いますので、削ることが可能な機能についてもある程度検討をつけて提案をすることができると思います。

== まとめ
見積もりとは開発の最初の段階における信頼形成の大事な事柄です。
暖かみのある見積もりを心がけることで、社内での信頼関係が構築されるため、無理なスケジュール設定や無謀な開発を依頼されたりすることが減ると思います。
みなさんも、小さなことからでも良いので暖かみのある見積もりを目指してみましょう！
