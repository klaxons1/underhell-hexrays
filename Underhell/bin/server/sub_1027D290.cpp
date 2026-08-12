int __usercall sub_1027D290@<eax>(int a1@<ecx>, int a2@<ebx>)
{
  double v3; // st7
  int v4; // eax
  _DWORD *v5; // edi
  _DWORD *v6; // eax
  _DWORD *v7; // edi
  float v9; // [esp+0h] [ebp-1Ch]
  float v10; // [esp+10h] [ebp-Ch]

  if ( *(_BYTE *)(a1 + 1412) )
  {
    v3 = *(float *)(a1 + 1408);
    if ( v3 < *(float *)(dword_106B31C8 + 12) )
      sub_1027CC20(a1, a2, v3);
  }
  v4 = sub_100D1940((_DWORD *)a1);
  v5 = (_DWORD *)v4;
  if ( v4 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 320))(v4) )
    {
      v6 = (_DWORD *)sub_101E7EA0(v5, 0);
      v7 = v6;
      if ( v6 )
      {
        if ( *(_DWORD *)(a1 + 1416) == -1 )
          *(_DWORD *)(a1 + 1416) = sub_10019BA0(v6, "VentPoses");
        v9 = (float)*(int *)(a1 + 1392);
        v10 = sub_10134630(v9, 0.0, 5.0, 0.0, 1.0);
        sub_10019C10(v7, *(_DWORD *)(a1 + 1416), v10);
      }
    }
  }
  return sub_102B0F00(a1);
}
