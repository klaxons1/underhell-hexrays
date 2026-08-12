int *__thiscall sub_10279BB0(int *this, int (__thiscall ***a2)(_DWORD), int a3, int a4)
{
  unsigned int *v5; // edi
  int v6; // edi
  unsigned int *v7; // edi

  sub_1024B100(this, a2, "SectionHeader", Locale);
  *this = (int)&vgui::CSectionHeader::`vftable';
  if ( !byte_10481913 )
  {
    byte_10481913 = 1;
    v5 = sub_10242540("CSectionHeader");
    v5[7] = (unsigned int)sub_10279150;
    v5[6] = (unsigned int)sub_10242540("Label");
  }
  if ( !byte_10481914 )
  {
    byte_10481914 = 1;
    v6 = sub_102484C0((int)"CSectionHeader");
    *(_DWORD *)(v6 + 24) = sub_10279150;
    *(_DWORD *)(v6 + 20) = sub_102484C0((int)"Label");
  }
  if ( !byte_10481915 )
  {
    byte_10481915 = 1;
    v7 = sub_10242580("CSectionHeader");
    v7[17] = (unsigned int)sub_10279150;
    v7[6] = (unsigned int)sub_10242580("Label");
  }
  this[73] = 0;
  sub_102498A0(this, a3, 0);
  sub_10236310((int (__thiscall ***)(void *, int))this, 0);
  this[74] = (int)a2;
  this[72] = a4;
  sub_1024AA90(this, -1);
  sub_1024AEF0(this);
  return this;
}
