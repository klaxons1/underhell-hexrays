void __thiscall sub_10211CD0(int this, int a2, int a3)
{
  int (__thiscall *v4)(int); // eax
  int v5; // ecx
  int (__thiscall *v6)(int); // eax
  int v7; // ecx
  float v8; // eax
  float v9; // edx
  int v10; // eax
  int v11; // edx
  int v12; // edx
  int i; // esi
  void (__thiscall ***v14)(_DWORD, int, int, int); // eax
  _BYTE v15[4]; // [esp+Ch] [ebp-80h] BYREF
  _DWORD v16[18]; // [esp+10h] [ebp-7Ch] BYREF
  int v17; // [esp+58h] [ebp-34h]
  int v18[2]; // [esp+60h] [ebp-2Ch] BYREF
  float v19; // [esp+68h] [ebp-24h] BYREF
  int v20; // [esp+6Ch] [ebp-20h]
  float v21; // [esp+70h] [ebp-1Ch]
  float v22; // [esp+74h] [ebp-18h] BYREF
  float v23; // [esp+78h] [ebp-14h]
  float v24; // [esp+7Ch] [ebp-10h]
  float v25; // [esp+80h] [ebp-Ch] BYREF
  float v26; // [esp+84h] [ebp-8h]
  float v27; // [esp+88h] [ebp-4h]
  int savedregs; // [esp+8Ch] [ebp+0h] BYREF

  if ( !(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(
          dword_106B31D0,
          *(_DWORD *)(*(_DWORD *)(a3 + 4 * (a2 == 0) + 104) + 24))
    && (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)(this + 1120) + 92))(this + 1120, 0) )
  {
    sub_10210CB0((_DWORD **)this, a2, a3);
  }
  if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)(this + 1120) + 92))(this + 1120, 1) )
  {
    sub_10247EC0(v16);
    v4 = *(int (__thiscall **)(int))(*(_DWORD *)this + 8);
    *(float *)&v16[13] = (float)*(int *)(this + 220);
    v5 = *(_DWORD *)v4(this);
    v6 = *(int (__thiscall **)(int))(*(_DWORD *)this + 8);
    v16[11] = v5;
    v16[10] = *(_DWORD *)v6(this);
    v7 = *(_DWORD *)(this + 424);
    v16[16] = 0;
    (*(void (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)v7 + 204))(v7, &v22, 0);
    (*(void (__thiscall **)(_DWORD, float *, _DWORD))(**(_DWORD **)(this + 424) + 188))(
      *(_DWORD *)(this + 424),
      &v25,
      0);
    *(float *)&v16[1] = v22;
    *(float *)&v16[2] = v23;
    *(float *)&v16[3] = v24;
    *(float *)&v16[4] = v25;
    *(float *)&v16[5] = v26;
    *(float *)&v16[6] = v27;
    sub_100D9E70((int *)this, this, v16);
  }
  else
  {
    if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)(this + 1120) + 92))(this + 1120, 2) )
    {
      (*(void (__thiscall **)(_DWORD, float *, _DWORD))(**(_DWORD **)(this + 424) + 188))(
        *(_DWORD *)(this + 424),
        &v22,
        0);
      v8 = *(float *)(a3 + 32);
      v9 = *(float *)(a3 + 40);
      v26 = *(float *)(a3 + 36);
      v25 = v8;
      v27 = v9;
      off_10689714();
      v19 = v25 * 64.0 + v22;
      *(float *)&v20 = v26 * 64.0 + v23;
      v21 = 64.0 * v27 + v24;
      sub_1002A5F0((int)&savedregs, this, &v22, &v19, 1174421507, this, 0, (int)v15);
      if ( v17 )
      {
        v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 220))(v17);
        if ( v10 != 3 && v10 != 2 && v10 != 7 && v10 != 8 )
        {
          v11 = sub_1001F3C0((_DWORD *)this) % 3;
          if ( v11 )
          {
            v12 = v11 - 1;
            if ( v12 )
            {
              if ( v12 == 1 )
                sub_10264E40(v15, "PaintSplatPink");
            }
            else
            {
              sub_10264E40(v15, "PaintSplatGreen");
            }
          }
          else
          {
            sub_10264E40(v15, "PaintSplatBlue");
          }
        }
      }
    }
    if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)(this + 1120) + 92))(this + 1120, 15) )
    {
      v18[0] = 0;
      v18[1] = 0;
      v19 = 0.0;
      *(float *)&v20 = 0.0;
      v21 = 0.0;
      sub_1016B400(this, v18);
      for ( i = 0; i < v20; ++i )
      {
        v14 = (void (__thiscall ***)(_DWORD, int, int, int))__RTDynamicCast(
                                                              *(_DWORD *)(v18[0] + 4 * i),
                                                              0,
                                                              (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                                                              (int)&IParentPropInteraction `RTTI Type Descriptor',
                                                              0);
        if ( v14 )
          (**v14)(v14, 1, a2, a3);
      }
      sub_102375F0(v18);
    }
  }
}
