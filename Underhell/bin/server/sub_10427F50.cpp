char __thiscall sub_10427F50(int this, int (***a2)())
{
  _DWORD *v4; // eax
  _DWORD *v5; // eax
  int v6; // edi
  int v7; // [esp-8h] [ebp-Ch]

  if ( (*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_10700A40 + 8))(dword_10700A40, "VMaterialSystem079") )
  {
    if ( *(_BYTE *)(this + 273) && a2 )
    {
      *(_DWORD *)(this + 240) = a2;
      *(_BYTE *)(this + 273) = 0;
    }
    if ( !*(_BYTE *)(this + 272) )
    {
      v4 = (_DWORD *)sub_10184390(96);
      if ( v4 )
        v5 = sub_10427BA0(v4);
      else
        v5 = 0;
      *(_DWORD *)(this + 140) = v5;
      v7 = *(_DWORD *)(this + 92);
      a2 = &off_1068DDF4;
      sub_1041DA00((int *)(this + 80), v7, &a2);
      *(_DWORD *)(this + 264) = 0;
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)dword_10700A4C + 124))(dword_10700A4C) >= 90 )
      {
        if ( sub_1042A310(32) )
          v6 = sub_1042A330("DepthWrite");
        else
          v6 = 0;
        sub_1042AFD0("$no_fullbright", 1);
        sub_1042AFD0("$model", 0);
        sub_1042AFD0("$alphatest", 0);
        *(_DWORD *)(this + 264) = (*(int (__thiscall **)(int, const char *, int))(*(_DWORD *)dword_10700A40 + 276))(
                                    dword_10700A40,
                                    "__particlesDepthWrite",
                                    v6);
      }
      sub_1044E940(12345678);
      *(_BYTE *)(this + 272) = 1;
    }
    return 1;
  }
  else
  {
    Msg("CParticleSystemMgr compiled using an old IMaterialSystem\n");
    return 0;
  }
}
