int __thiscall sub_1010C3C0(int this)
{
  int v2; // eax
  int v3; // ecx
  int result; // eax
  int v5; // esi
  int *v6; // edi
  _BYTE *v7; // eax
  int v8; // ebx
  int *v9; // esi
  _BYTE *v10; // eax
  int v11; // eax
  int v12; // edi
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int *v16; // edi
  int *v17; // [esp+4h] [ebp-Ch]
  int *v18; // [esp+8h] [ebp-8h]
  int v19; // [esp+8h] [ebp-8h]
  int v20; // [esp+Ch] [ebp-4h]

  if ( sub_10229D00(32) )
    v2 = sub_10229D20("PropDatafile");
  else
    v2 = 0;
  *(_DWORD *)(this + 12) = v2;
  if ( dword_10413188 )
    v3 = dword_10413188 + 4;
  else
    v3 = 0;
  if ( (unsigned __int8)sub_10229D70(v3, "scripts/propdata.txt", 0) )
  {
    *(_BYTE *)(this + 16) = 1;
    result = sub_1022A6A0("BreakableModels", 0);
    if ( result )
    {
      result = sub_10229C90(result);
      v5 = result;
      v20 = result;
      if ( result )
      {
        v6 = (int *)(this + 20);
        v17 = v6;
        while ( 1 )
        {
          v18 = (int *)(*v6 + 24 * sub_1010C2A0(v6, v6[3]));
          v7 = (_BYTE *)sub_10229A00(v5);
          *v18 = sub_100AF260(v7);
          v8 = sub_10229C90(v5);
          if ( v8 )
          {
            v9 = v18;
            do
            {
              v10 = (_BYTE *)sub_10229A00(v8);
              v11 = sub_100AF260(v10);
              v12 = v9[4];
              v19 = v11;
              v13 = v9[2];
              if ( v12 + 1 > v13 )
                sub_1010AFF0(v9 + 1, v12 - v13 + 1);
              ++v9[4];
              v14 = v9[1];
              v15 = v9[4] - v12 - 1;
              v9[5] = v14;
              if ( v15 > 0 )
                memcpy((void *)(v14 + 4 * v12 + 4), (const void *)(v14 + 4 * v12), 4 * v15);
              v16 = (int *)(v9[1] + 4 * v12);
              if ( v16 )
                *v16 = v19;
              sub_10034D70(v19);
              v8 = sub_1021F0F0(v8);
            }
            while ( v8 );
            v5 = v20;
            v6 = v17;
          }
          result = sub_1021F0F0(v5);
          v20 = result;
          if ( !result )
            break;
          v5 = result;
        }
      }
    }
  }
  else
  {
    result = sub_1022AF00(*(_DWORD *)(this + 12));
    *(_DWORD *)(this + 12) = 0;
  }
  return result;
}
