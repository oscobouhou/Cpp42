/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EducationBrain.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 19:08:17 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/11 14:36:20 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <cstring>


void	Brain::EducateBrain( void )	{

	std::string	vortex[100] = { "La vraie vie est si souvent celle qu’on ne vit pas.",
	"Quand on a tout perdu, quand on n'a plus d'espoir, La vie est un opprobre, et la mort un devoir.",
	"La vie est une chose bien trop importante pour qu’on en parle sérieusement.",
	"La vie est à monter et non pas à descendre.",
	"Cette vie est un combat perpétuel et la philosophie est le seul emplâtre qu’on puisse mettre sur les blessures qu’on reçoit de tous côtés.",
	"La vie : bien agiter avant de s'en servir !",
	"Chaque vie qui vaut la peine d’être vécue est une lutte constante.",
	"La plus grande partie de la vie passe à mal faire, une grande partie à ne rien faire, toute la vie à faire autre chose que ce que l'on devrait.",
	"Une vie, c'est fait avec l'avenir, comme les corps sont faits avec le vide.",
	"Il vaut mieux rêver sa vie que la vivre, encore que la vivre, ce soit encore la rêver.",
	"La vie, c'est comme un autobus ; quand tu te retournes, tu t'aperçois qu'il y en a déjà beaucoup qui sont descendus.",
	"Notre vie vaut ce qu'elle nous a coûté d'efforts.",
	"J'ai appris qu'une vie ne vaut rien, mais rien ne vaut la vie.",
	"La vie est magnifique, aussi longtemps qu'elle vous consume.",
	"La vie est une perpétuelle distraction qui ne vous laisse même pas prendre conscience de ce dont elle distrait.",
	"Une vie est un oiseau aux filets du chasseur.",
	"La vie n'est pas le travail : travailler sans cesse rend fou.",
	"Je ne crois qu'au fleuve vie, je ne veux être que les flots de ce fleuve.",
	"Les défaites de la vie conduisent aux plus grandes victoires.",
	"La première moitié de notre vie est gâchée par nos parents et la seconde par nos enfants.",
	"Qui a dit que la vie est un songe ; la vie est un jeu.",
	"S'il fallait tolérer aux autres tout ce qu'on se permet à soi-même, la vie ne serait plus tenable.",
	"Si l'homme calculait son existence par le bonheur et comptait ses heures de joie pour des années de vie, compterait-il jusqu'à soixante ?",
	"Il y a si loin de la manière dont on vit de celle dont on devrait vivre, que celui qui tient pour réel et pour vrai ce qui devrait l'être sans doute, mais qui malheureusement ne l'est pas, court à une ruine inévitable",
	"Chaque pas dans la vie est un pas vers la mort",
	"Qu'est-ce que la vie ? Un délire. Qu'est-ce que la vie ? Une ombre, une illusion; et le plus grand des biens ne compte guère. Oui, toute la vie est un songe; et les songes eux-mêmes, que sont-ils ? Songe !",
	"Une vie inutile est une mort anticipée",
	"Rien n'est gratuit en ce bas monde. Tout s'expie, le bien comme le mal, se paie tôt ou tard. Le bien c'est beaucoup plus cher forcément",
	"Nous sommes tous résignés à la mort; c'est à la vie que nous n'arrivons pas à nous résigner",
	"C'est perdre la vie que de l'acheter par trop de soucis",
	"Mieux vaut mourir incompris que passer sa vie à s'expliquer",
	"La vie oscille, comme un pendule, de la souffrance à l’ennui",
	"On meurt toujours trop tôt – ou trop tard. Et cependant la vie est là, terminée. Tu n’es rien d’autre que ta vie.",
	"Qu'est-ce qu'exister ? Se boire sans soif",
	"Le bonheur d'une vie ne s'apprécie qu'au soir d'une vie",
	"Chacun de nous quitte la vie avec le sentiment qu'il vient à peine de naître",
	"Qu'une vie est heureuse quand elle commence par l'amour et finit par l'ambition. Si j'avais à en choisir une, je prendrai celle-ci.",
	"Notre vie vaut ce qu'elle nous a coûté d'efforts",
	"Le sens de la vie supprimé, il reste encore la vie",
	"La vie sans religion est une vie sans principe et une vie sans principe est comme un bateau sans gouvernail",
	"Seul est digne de la vie celui qui chaque jour part pour elle au combat",
	"La vie est l'adaptation continue de relations internes à des relations externes",
	"Où il y a de la vie, il y a de l'espoir",
	"La faculté d'un être d'agir selon ses représentations s'appelle la vie",
	"Une vie sans examen ne vaut pas la peine d’être vécue",
	"La vie est, à mes yeux, instinct de croissance, de durée, d’accumulation de force, de puissance : là où la volonté de puissance fait défaut, il y a déclin",
	"La vie sans musique est tout simplement une erreur, une fatigue, un exil.",
	"La vie est l'ensemble des forces résistant à la mort",
	"La vie n’est pas un problème à résoudre mais une réalité qui doit être vécu",
	"De toutes les sciences que l'homme peut et doit savoir, la principale, c'est la science de vivre de manière à faire le moins de mal et le plus de bien possible",
	"Hâte-toi de bien vivre et songe que chaque jour est à lui seul une vie",
	"Il ne faut pas lier un navire à une seule ancre, ni une vie à un seul espoir",
	"L'homme qui a le plus vécu n'est pas celui qui a compté le plus d'années, mais celui qui a le plus senti la vie",
	"Je crois qu'on ne peut mieux vivre qu'en cherchant à devenir meilleur, ni plus agréablement qu'en ayant la pleine conscience de son amélioration",
	"Les plaisirs de l'amour sont les seuls vrais plaisirs de la vie corporelle",
	"La vie de l'homme dépend de sa volonté ; sans volonté, elle serait abandonnée au hasard",
	"La nature fait les hommes semblables, la vie les rend différents.",
	"Je pense, donc je suis",
	"Connais-toi toi-même",
	"Ce que je sais, c’est que je ne sais rien",
	"Il faut apprendre à philosopher, et non pas la philosophie",
	"Pense par toi-même",
	"Deviens ce que tu es",
	"Dieu est mort",
	"L'homme est un pont, non une fin",
	"C'est la vraie marque d'un philosophe que le sentiment d'émerveillement",
	"Nul n'est méchant volontairement",
	"L'homme est la mesure de toute chose",
	"L'homme est un animal politique",
	"Le bonheur est une fin en soi",
	"Si Dieu n'existait pas, il faudrait l'inventer",
	"La vie n'est pas un problème à résoudre mais une réalité qui doit être vécue",
	"L'homme n'est pas un empire dans un empire",
	"La connaissance de l'homme ne peut pas s'étendre au-delà de son expérience propre",
	"Les philosophes n'ont fait qu'interpréter le monde, nous avons maintenant à le transformer",
	"L'homme est un loup pour l'homme",
	"La mort n'est rien pour nous",
	"Si tu n'es pas Socrate, tu dois vivre comme si tu voulais être Socrate",
	"L'ego est une fiction",
	"Rien de grand ne s'est fait dans le monde sans passion",
	"L'homme est condamné à être libre",
	"L'homme n'est qu'un roseau, le plus faible des roseaux, mais c'est un roseau pensant",
	"Le coeur a ses raisons que la raison ignore",
	"Pourquoi y a t il quelque chose plutôt que rien?",
	"La liberté est le droit de faire tout ce que les lois permettent",
	"Tout n’est pas politique, mais la politique  s’intéresse  à tout",
	"Toute conscience est conscience de quelque chose",
	"Les peuples veulent l’égalité dans la liberté et, s’ils ne peuvent l’obtenir, ils la veulent encore dans l’esclavage",
	"L'homme est un animal métaphysique",
	"La vie oscille, tel un pendule, de l'ennui à la souffrance",
	"N’attends pas que les événements arrivent comme tu le souhaites ; décide de vouloir ce qui arrive et tu seras heureux",
	"Le Dasein est un être des lointains",
	"On ne se baigne jamais deux fois dans le même fleuve",
	"Souviens-toi que tout ce qui arrive, arrive justement",
	"Celui qui cherche la sagesse est un sage, celui qui croit l'avoir trouvée est un fou",
	"Les passions ne sont en elles-mêmes ni bonnes ni mauvaises",
	"Chacun appelle barbarie ce qui n'est pas de son usage",
	"Le rire est le propre de l'homme",
	"L'absurde, c'est la raison lucide qui constate ses limites",
	"On ne naît pas femme, on le devient" };

	for ( int i = 0; i < 100; i++)
		this->_ideas[i].assign(vortex[i]);

}
