float *__thiscall sub_1017DF80(float *this, int a2, char *Source)
{
  int v4; // edi
  int v5; // edi
  int v6; // edi

  sub_101F48D0(a2, Source);
  *(_DWORD *)this = &CBaseModelPanel::`vftable';
  if ( !byte_10445318 )
  {
    byte_10445318 = 1;
    v4 = sub_10242540("CBaseModelPanel");
    *(_DWORD *)(v4 + 28) = sub_1017D1A0;
    *(_DWORD *)(v4 + 24) = sub_10242540("CMDLPanel");
  }
  if ( !byte_10445319 )
  {
    byte_10445319 = 1;
    v5 = sub_102484C0("CBaseModelPanel");
    *(_DWORD *)(v5 + 24) = sub_1017D1A0;
    *(_DWORD *)(v5 + 20) = sub_102484C0("CMDLPanel");
  }
  if ( !byte_1044531A )
  {
    byte_1044531A = 1;
    v6 = sub_10242580("CBaseModelPanel");
    *(_DWORD *)(v6 + 68) = sub_1017D1A0;
    *(_DWORD *)(v6 + 24) = sub_10242580("CMDLPanel");
  }
  this[701] = 0.0;
  this[702] = 0.0;
  this[703] = 0.0;
  this[704] = 0.0;
  this[705] = 0.0;
  this[706] = 0.0;
  this[707] = 0.0;
  this[708] = 0.0;
  this[709] = 0.0;
  this[710] = 0.0;
  this[684] = 0.0;
  this[685] = 0.0;
  this[686] = 0.0;
  this[687] = 0.0;
  this[688] = 0.0;
  this[689] = 0.0;
  this[690] = 0.0;
  this[691] = 0.0;
  this[692] = 0.0;
  this[693] = 0.0;
  this[694] = 0.0;
  this[695] = 0.0;
  this[696] = 0.0;
  this[697] = 0.0;
  this[698] = 0.0;
  this[699] = 0.0;
  *((_BYTE *)this + 2800) = 0;
  sub_1017DEC0();
  sub_1017DF20();
  *((_WORD *)this + 1434) = 0;
  *((_BYTE *)this + 2870) = 0;
  return this;
}
