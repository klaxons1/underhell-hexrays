int __thiscall sub_10190A40(int this)
{
  int result; // eax
  int v3; // edx
  int i; // eax
  int v5; // eax
  int v6; // ecx
  float **v7; // ebx
  _DWORD *v8; // edi
  int v9; // esi
  int v10; // esi
  float **v11; // eax
  int v12; // [esp+4h] [ebp-14h]
  int v13; // [esp+8h] [ebp-10h]
  int v14; // [esp+Ch] [ebp-Ch]
  _DWORD *v16; // [esp+14h] [ebp-4h]
  int savedregs; // [esp+18h] [ebp+0h] BYREF

  sub_1018EC70((_DWORD *)(this + 120));
  result = dword_106B83DC;
  if ( !*(_DWORD *)(dword_106B83DC + 48) )
  {
    v3 = 0;
    result = this + 524;
    v13 = 0;
    v16 = (_DWORD *)(this + 524);
    do
    {
      for ( i = *(_DWORD *)(result + 12); i != -1; i = *(_DWORD *)(*v16 + v5 + 8) )
      {
        v5 = 12 * i;
        v6 = 0;
        v7 = (float **)(v5 + *v16);
        v12 = v5;
        v14 = 0;
        v8 = (_DWORD *)(this + 524);
        do
        {
          v9 = v8[3];
          if ( v9 != -1 )
          {
            do
            {
              v10 = 12 * v9;
              v11 = (float **)(v10 + *v8);
              if ( v11 != v7 )
              {
                sub_10190600((float *)this, (int)&savedregs, *v7, v3, *v11, v6);
                v6 = v14;
                v3 = v13;
              }
              v9 = *(_DWORD *)(*v8 + v10 + 8);
            }
            while ( v9 != -1 );
            v5 = v12;
          }
          ++v6;
          v8 += 9;
          v14 = v6;
        }
        while ( v6 < 4 );
      }
      ++v3;
      result = (int)(v16 + 9);
      v13 = v3;
      v16 += 9;
    }
    while ( v3 < 4 );
  }
  return result;
}
