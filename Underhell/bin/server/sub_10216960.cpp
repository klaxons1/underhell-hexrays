int __thiscall sub_10216960(int this)
{
  int v2; // eax
  int v3; // ecx
  int result; // eax
  int v5; // ebx
  int *v6; // edi
  _DWORD *v7; // esi
  _BYTE *v8; // eax
  int v9; // ebx
  _BYTE *v10; // eax
  int v11; // edi
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  const char **v15; // eax
  const char *v16; // eax
  int v17; // [esp+4h] [ebp-10h] BYREF
  int *v18; // [esp+8h] [ebp-Ch]
  const char *v19; // [esp+Ch] [ebp-8h] BYREF
  int v20; // [esp+10h] [ebp-4h]

  if ( sub_1042A310(32) )
    v2 = sub_1042A330("PropDatafile");
  else
    v2 = 0;
  *(_DWORD *)(this + 12) = v2;
  if ( dword_106B31D8 )
    v3 = dword_106B31D8 + 4;
  else
    v3 = 0;
  if ( (unsigned __int8)sub_1042A380(v3, "scripts/propdata.txt", 0) )
  {
    *(_BYTE *)(this + 16) = 1;
    result = sub_1042ACB0("BreakableModels", 0);
    if ( result )
    {
      result = sub_1042A2F0(result);
      v5 = result;
      v20 = result;
      if ( result )
      {
        v6 = (int *)(this + 20);
        v18 = v6;
        while ( 1 )
        {
          v7 = (_DWORD *)(*v6 + 24 * sub_102166C0(v6, v6[3]));
          v8 = (_BYTE *)sub_1042A070(v5);
          *v7 = *sub_10162BE0(&v17, v8);
          v9 = sub_1042A2F0(v5);
          if ( v9 )
          {
            do
            {
              v10 = (_BYTE *)sub_1042A070(v9);
              sub_10162BE0(&v19, v10);
              v11 = v7[4];
              v12 = v7[2];
              if ( v11 + 1 > v12 )
                sub_102ABFC0(v11 - v12 + 1);
              ++v7[4];
              v13 = v7[1];
              v14 = v7[4] - v11 - 1;
              v7[5] = v13;
              if ( v14 > 0 )
                memcpy((void *)(v13 + 4 * v11 + 4), (const void *)(v13 + 4 * v11), 4 * v14);
              v15 = (const char **)(v7[1] + 4 * v11);
              if ( v15 )
                *v15 = v19;
              v16 = v19;
              if ( !v19 )
                v16 = String;
              sub_100E8220(v11, v16);
              v9 = sub_1042A300(v9);
            }
            while ( v9 );
            v6 = v18;
          }
          result = sub_1042A300(v20);
          v20 = result;
          if ( !result )
            break;
          v5 = v20;
        }
      }
    }
  }
  else
  {
    result = sub_1042B1A0(*(_DWORD *)(this + 12));
    *(_DWORD *)(this + 12) = 0;
  }
  return result;
}
