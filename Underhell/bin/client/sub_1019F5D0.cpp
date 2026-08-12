int __usercall sub_1019F5D0@<eax>(int a1@<ecx>, int a2@<ebx>)
{
  int result; // eax
  int v3; // eax
  int v4; // ebx
  int v5; // ecx
  int v6; // eax
  _DWORD *v7; // edx
  double v8; // st7
  int v9; // edi
  int v10; // esi
  int v11; // [esp-8h] [ebp-1Ch]
  int v12; // [esp-4h] [ebp-18h]
  int v13; // [esp+Ch] [ebp-8h]
  float v14; // [esp+10h] [ebp-4h]

  result = sub_101B3870(a1);
  if ( result )
  {
    v3 = sub_101B3870(a2);
    v4 = 0;
    *(_BYTE *)(v3 + 259) = 0;
    v5 = *(_DWORD *)(dword_10449704 + 2296);
    v6 = 0;
    if ( v5 > 0 )
    {
      v7 = (_DWORD *)(dword_10449704 + 2588);
      while ( *v7 != 2 )
      {
        ++v6;
        ++v7;
        if ( v6 >= v5 )
          goto LABEL_8;
      }
      *(_BYTE *)(sub_101B3870(v13) + 259) = 1;
    }
LABEL_8:
    if ( *(_BYTE *)(sub_101B3870(v13) + 259) )
      v8 = 0.5;
    else
      v8 = 1.5;
    result = dword_10449704;
    if ( *(int *)(dword_10449704 + 2296) > 0 )
    {
      v9 = 0;
      v10 = 2588;
      do
      {
        v12 = *(_DWORD *)(v10 + result);
        sub_101B3870(v9 + result + 2300);
        v14 = v8;
        sub_101B3FF0(v11, v12, v14);
        result = dword_10449704;
        ++v4;
        v10 += 4;
        v9 += 12;
      }
      while ( v4 < *(_DWORD *)(dword_10449704 + 2296) );
    }
  }
  return result;
}
