int __usercall sub_100EA800@<eax>(const char *a1@<esi>)
{
  int result; // eax
  int i; // edi
  int v3; // eax
  int v4; // esi
  int v5; // eax
  bool v6; // zf
  int *v7; // ecx
  float v9; // [esp+1Ch] [ebp-4h]

  dword_10698644 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)cvar + 52))(cvar, "host_timescale");
  result = dword_106B31C8;
  for ( i = 1; i <= *(_DWORD *)(dword_106B31C8 + 20); ++i )
  {
    v3 = sub_1025FB50(i);
    v4 = v3;
    if ( v3 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 320))(v3) )
    {
      v5 = (*(int (__thiscall **)(int, const char *, const char *))(*(_DWORD *)cvar + 52))(cvar, "hl2_normspeed", a1);
      v6 = *(_DWORD *)(dword_106984AC + 48) == 0;
      dword_10698640 = v5;
      if ( v6 )
      {
        a1 = "r_screenoverlay off \n";
        (*(void (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 144))(dword_106B31D0);
        (**(void (__thiscall ***)(int, int))(dword_10698644 + 24))(dword_10698644 + 24, 1);
        v9 = *(float *)(*(_DWORD *)(dword_10698640 + 28) + 44);
      }
      else
      {
        a1 = "r_screenoverlay dev/bullettime \n";
        (*(void (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 144))(dword_106B31D0);
        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)(dword_10698644 + 24) + 4))(*(float *)(dword_106984F4 + 44));
        v9 = *(float *)(dword_106985CC + 44);
      }
      if ( *(_DWORD *)(v4 + 4132) != LODWORD(v9) )
      {
        if ( *(_BYTE *)(v4 + 84) )
        {
          *(_BYTE *)(v4 + 88) |= 1u;
        }
        else
        {
          v7 = *(int **)(v4 + 24);
          if ( v7 )
            sub_100194B0(v7, 4132);
        }
        *(float *)(v4 + 4132) = v9;
      }
    }
    result = dword_106B31C8;
  }
  return result;
}
