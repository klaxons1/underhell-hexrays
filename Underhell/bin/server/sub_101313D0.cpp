int __thiscall sub_101313D0(int this)
{
  int v1; // edi
  _DWORD *v3; // esi
  _DWORD *v4; // ebx
  int result; // eax
  int v6; // esi
  int v7; // edi
  int v8; // esi
  int v9; // ebx
  char v10; // [esp+Ch] [ebp-20Ch] BYREF
  char v11[256]; // [esp+10Ch] [ebp-10Ch] BYREF
  int v12; // [esp+20Ch] [ebp-Ch]
  int i; // [esp+210h] [ebp-8h]
  _DWORD *v14; // [esp+214h] [ebp-4h]

  v1 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
    sub_100BD750((volatile signed __int32 *)this);
  v3 = *(_DWORD **)(this + 1100);
  if ( v3 && *v3 )
  {
    v4 = v3;
    v14 = v3;
  }
  else
  {
    v14 = 0;
    v4 = 0;
  }
  result = (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 104))(v1);
  if ( v4 )
  {
    result = sub_10245270(v4);
    v6 = 0;
    v12 = result;
    for ( i = 0; v6 < v12; i = v6 )
    {
      v7 = sub_10245550(v6);
      result = *(_DWORD *)(v7 + 24);
      if ( result > 0 )
      {
        v8 = 0;
        v9 = *(_DWORD *)(v7 + 24);
        do
        {
          result = *(_DWORD *)(v7 + 28) + v8 + v7;
          if ( *(_DWORD *)(result + 4) == 6002 )
          {
            result = sscanf((const char *const)(result + 12), "%255s %255s", &v10, v11);
            if ( result == 2 )
              result = sub_10154360(v11);
          }
          v8 += 80;
          --v9;
        }
        while ( v9 );
        v6 = i;
      }
      ++v6;
    }
  }
  return result;
}
