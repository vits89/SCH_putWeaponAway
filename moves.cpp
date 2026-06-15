class CfgMovesBasic;
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class TransAnimBase;
		class TransAnimBase_noIK;

		class AmovPercMstpSnonWnonDnon;
		class AmovPknlMstpSnonWnonDnon;

		class AmovPercMrunSnonWnonDf: AmovPercMstpSnonWnonDnon
		{
			delete soundEdge;
		};

		class AmovPercMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon: TransAnimBase
		{
			idle = "";
		};
		class AmovPercMstpSnonWnonDnon_AwopPercMstpSoptWbinDnon: TransAnimBase_noIK
		{
			idle = "";
			mask = "weaponSwitching";
		};

		class AmovPercMstpSrasWlnrDnon_AmovPercMstpSnonWnonDnon: AmovPercMstpSnonWnonDnon
		{
			idle = "";
		};
		class AmovPercMstpSrasWpstDnon_AmovPercMstpSnonWnonDnon: TransAnimBase
		{
			idle = "";
		};
		class AmovPercMstpSrasWrflDnon_AmovPercMstpSnonWnonDnon: AmovPercMstpSnonWnonDnon
		{
			idle = "";
		};

		class AmovPknlMstpSnonWnonDnon_AmovPknlMstpSrasWrflDnon: TransAnimBase
		{
			idle = "";
		};
		class AmovPknlMstpSnonWnonDnon_AwopPknlMstpSoptWbinDnon: TransAnimBase
		{
			idle = "";
			mask = "weaponSwitching";
		};

		class AmovPknlMstpSrasWlnrDnon_AmovPknlMstpSnonWnonDnon: AmovPknlMstpSnonWnonDnon
		{
			idle = "";
		};
		class AmovPknlMstpSrasWpstDnon_AmovPknlMstpSnonWnonDnon: TransAnimBase
		{
			idle = "";
		};

		class AwopPercMstpSoptWbinDnon_AmovPercMstpSnonWnonDnon: TransAnimBase_noIK
		{
			idle = "";
			mask = "weaponSwitching";
		};
		class AwopPercMstpSoptWbinDnon_AmovPercMstpSnonWnonDnon_end: AmovPercMstpSnonWnonDnon
		{
			idle = "";
			mask = "weaponSwitching";
		};

		class AwopPknlMstpSoptWbinDnon_AmovPknlMstpSnonWnonDnon: TransAnimBase_noIK
		{
			idle = "";
			mask = "weaponSwitching";
		};
		class AwopPknlMstpSoptWbinDnon_AmovPknlMstpSnonWnonDnon_end: AmovPknlMstpSnonWnonDnon
		{
			idle = "";
			mask = "weaponSwitching";
		};
	};
};
