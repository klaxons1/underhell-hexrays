void __thiscall sub_101A41C0(int this, int *a2)
{
  int v3; // eax
  int v4; // ebx
  float *v5; // edi
  _DWORD *v6; // eax
  float *v7; // eax
  float *v8; // eax
  int v9; // eax
  void (__thiscall *v10)(int, const char *); // edx
  int v11; // edi
  int (__thiscall *v12)(int); // eax
  float v13; // [esp+4h] [ebp-64h]
  _DWORD v14[14]; // [esp+14h] [ebp-54h] BYREF
  _BYTE v15[12]; // [esp+4Ch] [ebp-1Ch] BYREF
  float v16; // [esp+58h] [ebp-10h]
  float v17; // [esp+5Ch] [ebp-Ch]
  float v18; // [esp+60h] [ebp-8h]
  float v19; // [esp+64h] [ebp-4h]

  v3 = *a2;
  if ( *a2 < 129 )
    goto LABEL_46;
  if ( v3 > 130 )
  {
    if ( v3 == 250 )
    {
      v4 = *(_DWORD *)(this + 2372);
      *(float *)(this + 3988) = *(float *)(dword_106B9004 + 44);
      if ( v4 == dword_106B8F40 || v4 == dword_106B8F44 || v4 == 1 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 732))(this) )
        {
          *(float *)(this + 3888) = *(float *)(dword_106B904C + 44) + *(float *)(dword_106B31C8 + 12);
          sub_10027CD0((_DWORD *)this, 0);
          *(float *)(this + 3988) = 1.0;
        }
        else
        {
          sub_10043050((void *)this, 0, 0);
        }
        return;
      }
      if ( v4 == 332 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 732))(this) )
        {
          sub_1023C380((int)"NPC_Butcher.Charge", 0.0, 0);
          (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 1416))(this, 15);
        }
      }
      else if ( v4 != 15 )
      {
LABEL_19:
        sub_10019C10((_DWORD *)this, *(_DWORD *)(this + 2188), 0.0);
        memset(v14, 0, sizeof(v14));
        v9 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
        if ( !sub_10043050((void *)this, v9, (int)v14) )
        {
          if ( sub_101A3D20(this, v14[1], v14[2], v14[3], v14[7]) )
          {
            if ( v4 == 332 )
            {
              v10 = *(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 1312);
              *(float *)(this + 3888) = *(float *)(dword_106B31C8 + 12) + 10.0;
              *(float *)(this + 3988) = 1.0;
              v10(this, "Unable to make initial movement of charge\n");
            }
            else
            {
              v11 = dword_106B8F40;
              if ( v4 != dword_106B8F40 )
              {
                if ( v14[0] == -2 && sub_10018CD0((float *)&v14[4], &flt_106F1CA8) )
                  (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 1416))(this, v11);
                else
                  (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 1416))(this, dword_106B8F44);
              }
            }
          }
          else if ( v14[7] && (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v14[7] + 220))(v14[7]) == 19 )
          {
            v13 = (float)*(int *)(v14[7] + 220);
            sub_10370AF0(this, v14[7], v13);
          }
        }
        return;
      }
      if ( sub_10023D10((_DWORD *)this, 26) || sub_10023D10((_DWORD *)this, 11) || sub_10023D10((_DWORD *)this, 30) )
      {
        (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 1416))(this, dword_106B8F40);
        return;
      }
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) )
      {
        v5 = (float *)sub_10019640((_DWORD *)this);
        v6 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
        v7 = (float *)sub_10019640(v6);
        v16 = *v7 - *v5;
        v17 = v7[1] - v5[1];
        v18 = v7[2] - v5[2];
        off_10689714();
        v8 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this + 904))(this, v15);
        if ( v8[1] * v17 + *v8 * v16 + v8[2] * v18 >= 0.25 )
        {
          *(_BYTE *)(this + 3900) = 0;
        }
        else if ( !*(_BYTE *)(this + 3900) )
        {
          *(_BYTE *)(this + 3900) = 1;
        }
      }
      goto LABEL_19;
    }
LABEL_46:
    sub_1032CFB0(this, (int)a2);
    return;
  }
  sub_1032CFB0(this, (int)a2);
  if ( (*(_DWORD *)(this + 256) & 0x8000000) != 0 && *(float *)(dword_106B31C8 + 12) < (double)*(float *)(this + 3868) )
    sub_101A21B0((float *)this);
  if ( !(*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) )
    goto LABEL_45;
  if ( sub_101A2E60((float *)this) )
  {
    v12 = *(int (__thiscall **)(int))(*(_DWORD *)this + 448);
    v19 = (float)*(int *)(this + 220);
    if ( (double)v12(this) * 0.5 < v19 )
      sub_101A2200((float *)this, 0);
    else
      sub_101A2200((float *)this, 1);
    return;
  }
  if ( sub_1007DE30(*(_DWORD **)(this + 2588)) != 11 && !(unsigned __int8)sub_101A4FF0(this) )
LABEL_45:
    sub_1007DD70(11);
}
