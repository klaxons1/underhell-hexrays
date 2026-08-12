char __thiscall sub_101FB9F0(int this, int (***a2)())
{
  _DWORD *v4; // eax
  _DWORD *v5; // eax
  int v6; // edi
  int v7; // [esp-8h] [ebp-Ch]

  if ( (*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_1047C970 + 8))(dword_1047C970, "VMaterialSystem079") )
  {
    if ( *(_BYTE *)(this + 273) && a2 )
    {
      *(_DWORD *)(this + 240) = a2;
      *(_BYTE *)(this + 273) = 0;
    }
    if ( !*(_BYTE *)(this + 272) )
    {
      v4 = (_DWORD *)sub_100DDA40(96);
      if ( v4 )
        v5 = sub_101FB450(v4);
      else
        v5 = 0;
      *(_DWORD *)(this + 140) = v5;
      v7 = *(_DWORD *)(this + 92);
      a2 = &off_103F2864;
      sub_10258C50(v7, &a2);
      *(_DWORD *)(this + 264) = 0;
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C97C + 124))(dword_1047C97C) >= 90 )
      {
        if ( sub_10229D00(32) )
          v6 = sub_10229D20("DepthWrite");
        else
          v6 = 0;
        sub_1022ACA0("$no_fullbright", 1);
        sub_1022ACA0("$model", 0);
        sub_1022ACA0("$alphatest", 0);
        *(_DWORD *)(this + 264) = (*(int (__thiscall **)(int, const char *, int))(*(_DWORD *)dword_1047C970 + 276))(
                                    dword_1047C970,
                                    "__particlesDepthWrite",
                                    v6);
      }
      sub_102AF340(12345678);
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
