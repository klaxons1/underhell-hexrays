int __usercall sub_10146870@<eax>(int a1@<esi>)
{
  int result; // eax
  int v2; // edi
  int v3; // esi
  int v4; // eax
  double v5; // st6
  int v6; // edi
  int v7; // edi
  int v8; // edi
  float v9; // [esp+14h] [ebp-18h]
  float v10; // [esp+14h] [ebp-18h]
  float v11[3]; // [esp+1Ch] [ebp-10h] BYREF
  float v12; // [esp+28h] [ebp-4h]

  result = sub_100422D0();
  v2 = result;
  if ( result )
  {
    v3 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C, a1);
    if ( v3 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 8))(v3);
    v4 = sub_100422D0();
    if ( !v4 )
      goto LABEL_7;
    if ( *(_DWORD *)(dword_1043C1A4 + 48) )
    {
      if ( !*(_DWORD *)(dword_1043C42C + 48) )
      {
LABEL_7:
        (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 172))(v3);
LABEL_8:
        (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 12))(v3);
        return (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 4))(v3);
      }
    }
    else if ( !*(_BYTE *)(v4 + 3780) )
    {
      goto LABEL_7;
    }
    sub_10144B60(v11);
    v12 = 1.0;
    v5 = (double)*(int *)(v2 + 3696);
    if ( v5 > 0.0 )
      v12 = 1.0 / v5;
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 172))(v3, 1);
    (*(void (__thiscall **)(int, float *))(*(_DWORD *)v3 + 196))(v3, v11);
    v6 = *(_DWORD *)v3;
    v9 = sub_10142D60() * v12;
    (*(void (__thiscall **)(int, _DWORD))(v6 + 176))(v3, LODWORD(v9));
    v7 = *(_DWORD *)v3;
    v10 = sub_10142DA0() * v12;
    (*(void (__thiscall **)(int, _DWORD))(v7 + 180))(v3, LODWORD(v10));
    v8 = *(_DWORD *)v3;
    sub_10142DE0();
    (*(void (__thiscall **)(int))(v8 + 664))(v3);
    goto LABEL_8;
  }
  return result;
}
