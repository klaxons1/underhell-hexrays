void __thiscall sub_10151DB0(int this, float *a2, float a3, float *a4, float *a5)
{
  int v6; // eax
  int v7; // ebx
  int v8; // edi
  int v9; // ecx
  int v10; // ebx
  int v11; // eax
  char v12; // al
  int v13; // ebx
  double v14; // st7
  double v15; // st5
  int v16; // eax
  int v17[14]; // [esp+1Ch] [ebp-4Ch] BYREF
  int v18[3]; // [esp+54h] [ebp-14h] BYREF
  int v19; // [esp+60h] [ebp-8h]
  int v20; // [esp+64h] [ebp-4h]

  v6 = *(_DWORD *)(this + 1404);
  v7 = 0;
  v8 = 0;
  *(_DWORD *)(this + 1256) = 0;
  *(_BYTE *)(this + 1388) = 0;
  v19 = v6;
  if ( v6 > 0 )
  {
    v20 = 0;
    do
    {
      v9 = *(_DWORD *)(v7 + *(_DWORD *)(this + 1392) + 4);
      v10 = *(_DWORD *)off_103DCDDC;
      v11 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 20))(v9);
      v12 = (*(int (__thiscall **)(void *, int))(v10 + 20))(off_103DCDDC, v11);
      v13 = v20;
      if ( v12 )
      {
        if ( sub_100902F0(
               (float *)(v20 + *(_DWORD *)(this + 1392) + 12),
               (float *)(v20 + *(_DWORD *)(this + 1392) + 24),
               a2,
               a3) )
        {
          *(_DWORD *)(this + 4 * (*(_DWORD *)(this + 1256))++ + 1260) = v8;
          if ( *(int *)(this + 1256) >= 32 )
            goto LABEL_12;
        }
        else
        {
          v14 = *(float *)(dword_1043D4AC + 44);
          v15 = a5[1];
          v16 = v13 + *(_DWORD *)(this + 1392);
          *(float *)v18 = *a5 * v14;
          *(float *)&v18[1] = v14 * v15;
          *(float *)&v18[2] = 0.0;
          sub_10090840(a4, (float *)v18, v16 + 12, v16 + 24, 0.32499999, (int)v17, 0);
          if ( *(float *)&v17[11] < 1.0 )
          {
            *(_DWORD *)(this + 4 * (*(_DWORD *)(this + 1256))++ + 1260) = v8;
            if ( *(int *)(this + 1256) >= 32 )
            {
LABEL_12:
              DevWarning(1, "Max Active Snow Volume Count!\n");
              return;
            }
            *(_BYTE *)(this + 1388) = 1;
          }
        }
      }
      ++v8;
      v7 = v13 + 36;
      v20 = v7;
    }
    while ( v8 < v19 );
  }
}
