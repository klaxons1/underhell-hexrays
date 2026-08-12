_DWORD *__thiscall sub_101323F0(_DWORD *this, int a2)
{
  int v3; // ebx
  int v4; // edi
  int v5; // edi
  int v7; // [esp+Ch] [ebp-Ch] BYREF
  int v8; // [esp+10h] [ebp-8h] BYREF
  int v9; // [esp+14h] [ebp-4h]

  sub_1024C5C0(0, "CLoadingDiscPanel");
  *this = &CLoadingDiscPanel::`vftable';
  v3 = sub_10076740();
  v9 = sub_10076720();
  sub_10236550(a2);
  sub_1023A780(1);
  sub_10236910("ClientScheme");
  sub_10236310(0);
  sub_10237030(0);
  if ( sub_100DDA40(284) )
    v4 = sub_1024B100((int)this, "LoadingLabel", (int)Locale);
  else
    v4 = 0;
  sub_10236050(v4);
  this[63] = v4;
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 264))(v4, 0);
  sub_1024C300("resource/LoadingDiscPanel.res", 0, 0);
  sub_102361D0(&v7, &v8);
  v5 = v9;
  sub_10236140((v3 - v7) / 2, (v9 - v8) / 2);
  this[65] = v5;
  this[64] = v3;
  return this;
}
