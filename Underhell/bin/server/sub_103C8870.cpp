void __thiscall sub_103C8870(int this, int *a2)
{
  char **v2; // edi
  char *v4; // eax
  _DWORD *v5; // esi
  const char *v6; // edi
  const char *v7; // eax
  __int64 v8; // [esp-8h] [ebp-18h]

  v2 = (char **)(a2 + 2);
  if ( a2[6] == 2 )
  {
    v4 = *v2;
    if ( !*v2 )
      v4 = (char *)String;
  }
  else
  {
    v4 = (char *)sub_1010D460((int)(a2 + 2));
  }
  v5 = sub_1012BF20(&dword_1069E3E0, 0, v4, 0, *a2, a2[1], 0);
  if ( v5 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v5 + 320))(v5)
      && (*(int (__thiscall **)(_DWORD *))(*v5 + 1572))(v5) >= 100
      || (v5[64] & 0x8000) != 0 )
    {
      HIDWORD(v8) = this;
      LODWORD(v8) = this;
      sub_1010DD80((_DWORD *)(this + 5788), v8, 0.0);
    }
    else
    {
      *(_DWORD *)(this + 5720) = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v5 + 8))(v5);
      *(_BYTE *)(this + 5753) = 1;
      sub_10023CB0((char *)this, 25);
    }
  }
  else
  {
    if ( a2[6] == 2 )
    {
      v6 = *v2;
      if ( v6 )
        v7 = v6;
      else
        v7 = String;
    }
    else
    {
      v7 = sub_1010D460((int)v2);
    }
    DevMsg(1, "Unable to charge from unknown entity: %s!\n", v7);
  }
}
