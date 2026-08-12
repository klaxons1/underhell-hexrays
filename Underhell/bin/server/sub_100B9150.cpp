void __thiscall sub_100B9150(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // edi
  int v5; // eax
  int v6; // ecx
  double v7; // st6
  double v8; // st5
  float *v9; // eax
  double v10; // st7
  double v11; // st7
  int v12; // eax
  _DWORD *v13; // ebx
  bool v14; // al
  double v15; // st7
  double v16; // st7
  int v17; // [esp-Ch] [ebp-8Ch]
  int v18; // [esp-8h] [ebp-88h]
  float v19[11]; // [esp+Ch] [ebp-74h] BYREF
  float v20; // [esp+38h] [ebp-48h]
  int v21; // [esp+58h] [ebp-28h]
  float v22[3]; // [esp+60h] [ebp-20h] BYREF
  float v23[3]; // [esp+6Ch] [ebp-14h] BYREF
  float v24; // [esp+78h] [ebp-8h]
  float v25; // [esp+7Ch] [ebp-4h]
  int savedregs; // [esp+80h] [ebp+0h] BYREF

  v2 = *(_DWORD *)(this + 8);
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 8) & 0xFFF) + 1];
    if ( v3[1] == v2 >> 12 )
    {
      v4 = *v3;
      if ( *v3 )
      {
        if ( *(float *)(this + 36) >= 0.1 )
        {
          v5 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 1868))(*(_DWORD *)(this + 4));
          v6 = sub_100773C0(v5, v4, 0);
          if ( *(float *)(this + 12) > 0.0 )
          {
            v12 = *(_DWORD *)(this + 4);
            v24 = *(float *)(this + 12);
            *(float *)(this + 12) = 0.0;
            v13 = *(_DWORD **)(v12 + 2404);
            v14 = v13 && sub_100AB070(v13, v4) && sub_100AAC30((_DWORD **)v13, v4);
            v15 = v24;
            *(float *)(this + 12) = v24;
            if ( !v14 )
            {
              v16 = v15 + *(float *)(this + 44) * 0.1;
              *(float *)(this + 12) = v16;
              if ( v16 <= *(float *)(this + 36) )
              {
LABEL_36:
                sub_10043F70((float *)(this + 16), v4, *(float *)(this + 40));
                return;
              }
LABEL_35:
              *(float *)(this + 12) = *(float *)(this + 36);
              goto LABEL_36;
            }
            if ( sub_1004FBE0((float *)(this + 16), v4) )
              sub_100B8FC0(this, 1);
            else
              *(float *)(this + 12) = *(float *)(this + 12) - 0.1;
          }
          else
          {
            if ( v6 )
              v7 = *(float *)(v6 + 28);
            else
              v7 = -3.402823466385289e38;
            v25 = v7;
            if ( v6 )
              v8 = *(float *)(v6 + 44);
            else
              v8 = -3.402823466385289e38;
            v24 = v8;
            if ( v7 == -3.402823466385289e38 || *(float *)(dword_106B31C8 + 12) - v7 > 0.15 )
            {
              v18 = *(_DWORD *)(this + 4);
              v17 = (*(int (__stdcall **)(float *, int))(*(_DWORD *)v18 + 504))(v23, 16449);
              v9 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 504))(v4);
              sub_1002A5F0((int)&savedregs, this, v9, v22, v17, v18, 0, (int)v19);
              if ( 1.0 != v20 && v21 != v4 )
              {
                v23[0] = v19[3] - v19[0];
                v23[1] = v19[4] - v19[1];
                v23[2] = v19[5] - v19[2];
                v10 = sub_100D7A40(v23);
                if ( v10 * v20 < *(float *)(this + 48) )
                {
                  if ( -3.402823466385289e38 == v25 )
                  {
                    v11 = -3.402823466385289e38;
                  }
                  else
                  {
                    v11 = -3.402823466385289e38;
                    if ( *(float *)(dword_106B31C8 + 12) - v25 <= *(float *)(this + 32) )
                      return;
                  }
                  if ( v24 == v11 || *(float *)(dword_106B31C8 + 12) - v24 > *(float *)(this + 32) )
                    goto LABEL_35;
                }
              }
            }
          }
        }
      }
    }
  }
}
