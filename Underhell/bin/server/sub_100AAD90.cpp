int __thiscall sub_100AAD90(int this, char a2, int a3, char a4)
{
  int v5; // eax
  int v6; // esi
  int v7; // ebx
  int v8; // eax
  double v9; // st4
  double v10; // st7
  double v11; // st4
  double v12; // st5
  double v13; // st7
  int v14; // ecx
  int (__thiscall *v15)(int, int); // eax
  int v16; // eax
  float v18[3]; // [esp+8h] [ebp-18h] BYREF
  int v19; // [esp+14h] [ebp-Ch]
  float v20; // [esp+18h] [ebp-8h]
  int v21; // [esp+1Ch] [ebp-4h]

  v20 = 268435460.0;
  v5 = *(_DWORD *)(this + 20);
  v6 = 0;
  v19 = -2;
  v21 = 0;
  if ( v5 == -1 )
  {
    v7 = 0;
  }
  else
  {
    v7 = v5;
    v6 = sub_1023C740(v5);
  }
  (*(void (__thiscall **)(_DWORD, float *))(**(_DWORD **)(this + 4) + 516))(*(_DWORD *)(this + 4), v18);
  if ( v6 )
  {
    while ( 1 )
    {
      if ( a2 )
      {
        if ( (unsigned __int8)sub_1023C6C0(v6) )
        {
LABEL_9:
          if ( (a3 & *(_DWORD *)(v6 + 16)) != 0
            && !(*(unsigned __int8 (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4) + 1472))(
                  *(_DWORD *)(this + 4),
                  v6) )
          {
            if ( !a4
              || (v8 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4) + 1456))(*(_DWORD *)(this + 4), v6),
                  v8 >= v19) )
            {
              v9 = *(float *)(v6 + 36) - v18[0];
              v10 = v9 * v9;
              v11 = *(float *)(v6 + 40) - v18[1];
              v12 = *(float *)(v6 + 44) - v18[2];
              v13 = v12 * v12 + v11 * v11 + v10;
              if ( v20 > v13 )
              {
                v14 = *(_DWORD *)(this + 4);
                v20 = v13;
                v15 = *(int (__thiscall **)(int, int))(*(_DWORD *)v14 + 1456);
                v21 = v6;
                v19 = v15(v14, v6);
              }
            }
          }
        }
      }
      else if ( (unsigned __int8)sub_1023C660(v6) )
      {
        goto LABEL_9;
      }
      if ( v7 )
      {
        v16 = *(_DWORD *)(sub_1023C740(v7) + 20);
        if ( v16 != -1 )
        {
          v7 = v16;
          v6 = sub_1023C740(v16);
          if ( v6 )
            continue;
        }
      }
      return v21;
    }
  }
  return v21;
}
