int __thiscall sub_100C06C0(int this, int a2, int a3, int a4, float a5, char a6)
{
  int v6; // edi
  _DWORD *v8; // esi
  _DWORD *v9; // ebx
  int result; // eax
  int v11; // esi
  int v12; // edi
  int v13[3]; // [esp+10h] [ebp-1Ch] BYREF
  int v14[3]; // [esp+1Ch] [ebp-10h] BYREF
  int v15; // [esp+28h] [ebp-4h]
  int v16; // [esp+44h] [ebp+18h]

  v6 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240(this) )
    sub_100BD750((volatile signed __int32 *)this);
  v8 = *(_DWORD **)(this + 1100);
  if ( v8 && *v8 )
    v9 = v8;
  else
    v9 = 0;
  result = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 104))(v6);
  if ( v9 )
  {
    result = *v9;
    v11 = 0;
    v12 = (unsigned __int8)-(a6 != 0);
    v15 = 0;
    if ( *(int *)(result + 156) > 0 )
    {
      v16 = a2;
      do
      {
        if ( (a3 & *(_DWORD *)(v11 + *(_DWORD *)(result + 160) + result + 160)) != 0 )
        {
          sub_10421CE0(v16, 3, v13);
          if ( *(_DWORD *)(v11 + *(_DWORD *)(*v9 + 160) + *v9 + 4) != -1 )
          {
            sub_10421CE0(a2 + 48 * *(_DWORD *)(v11 + *(_DWORD *)(*v9 + 160) + *v9 + 4), 3, v14);
            sub_1011BC50((int)v13, (int)v14, 255, 255, v12, a4, a5);
          }
        }
        result = *v9;
        v16 += 48;
        v11 += 216;
        ++v15;
      }
      while ( v15 < *(_DWORD *)(result + 156) );
    }
  }
  return result;
}
