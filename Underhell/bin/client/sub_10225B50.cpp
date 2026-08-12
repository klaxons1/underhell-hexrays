int __thiscall sub_10225B50(int this, int *a2, int a3, int a4)
{
  int v5; // esi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int result; // eax
  int v10; // eax
  int v11; // ecx
  int v12; // edi
  int v13; // esi
  int v14; // edx
  int v15; // ebx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  float v19; // [esp+28h] [ebp-258h]
  float v20; // [esp+2Ch] [ebp-254h]
  int v21; // [esp+44h] [ebp-23Ch]
  int v22; // [esp+44h] [ebp-23Ch]
  int v23; // [esp+44h] [ebp-23Ch]
  int v24; // [esp+48h] [ebp-238h] BYREF
  float v25[19]; // [esp+4Ch] [ebp-234h] BYREF
  _BYTE v26[44]; // [esp+98h] [ebp-1E8h] BYREF
  int v27; // [esp+C4h] [ebp-1BCh]
  int v28; // [esp+14Ch] [ebp-134h]
  int v29; // [esp+150h] [ebp-130h]
  char v30; // [esp+154h] [ebp-12Ch]
  _DWORD v31[4]; // [esp+158h] [ebp-128h] BYREF
  int v32; // [esp+168h] [ebp-118h]
  int v33; // [esp+16Ch] [ebp-114h]
  int v34; // [esp+170h] [ebp-110h]
  int v35; // [esp+1D8h] [ebp-A8h]
  int v36; // [esp+230h] [ebp-50h]
  int v37; // [esp+238h] [ebp-48h]
  int v38; // [esp+23Ch] [ebp-44h]

  v5 = sub_101F7960(*(_DWORD *)(a3 + 64));
  if ( *(_BYTE *)(a4 + 16) )
    sub_102232A0(a3, (float *)(a4 + 8), this + 44, a4 + 20);
  v6 = (*(int (__thiscall **)(int, const char *, int))(*(_DWORD *)v5 + 188))(v5, "$orientation", a4);
  if ( v6 )
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 16))(v6, *(_DWORD *)(this + 96));
  (*(void (__thiscall **)(int *, int, _DWORD))(*a2 + 36))(a2, v5, 0);
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 204))(v5) )
  {
    if ( *(_DWORD *)(this + 96) == 2 )
    {
      v21 = (*(int (__thiscall **)(int, const char *, int))(*(_DWORD *)v5 + 188))(v5, "$orientationMatrix", a4 + 4);
      if ( v21 )
      {
        v10 = *(_DWORD *)(this + 100);
        if ( v10 >= 0 )
          sub_101F8900((char *)a3, v10, v25);
        else
          sub_101F1ED0(v25);
        (*(void (__thiscall **)(int, float *))(*(_DWORD *)v21 + 76))(v21, v25);
      }
    }
    v20 = *(float *)(this + 88) * 1024.0;
    v19 = 1024.0 * *(float *)(this + 84);
    sub_10220B80(v25, (float *)a3, 0, v19, v20, *(_DWORD *)(a3 + 8));
    v22 = (*(int (__thiscall **)(int *, int))(*a2 + 516))(a2, v5);
    v11 = (*(int (__thiscall **)(int *))(*a2 + 520))(a2) / 6;
    v23 = v22 / 4;
    if ( v23 >= v11 )
      v23 = v11;
    v12 = sub_10227A90(a2, 1, &v24, a4 + 8);
    for ( result = v24; v24; result = v24 )
    {
      v13 = v23;
      if ( v23 >= result )
        v13 = result;
      v14 = *a2;
      v24 = result - v13;
      v15 = (*(int (__thiscall **)(int *, int, _DWORD, _DWORD, _DWORD))(v14 + 224))(a2, 1, 0, 0, 0);
      sub_10016C20((int)v26);
      sub_10061780((int)v26, v15, 2, 4 * v13, 6 * v13);
      v25[17] = 0.0;
      if ( v27 )
      {
        if ( v13 > 0 )
        {
          do
          {
            v16 = *(_DWORD *)(v12 - 12);
            v12 -= 16;
            sub_10221B30((int)v26, (int)v25, v16, v12);
            --v13;
          }
          while ( v13 );
        }
      }
      else if ( v13 > 0 )
      {
        do
        {
          v17 = *(_DWORD *)(v12 - 12);
          v12 -= 16;
          sub_10223E40((_BYTE *)this, (int)v26, (int)v25, v17, v12);
          --v13;
        }
        while ( v13 );
      }
      if ( v30 )
      {
        switch ( v29 )
        {
          case 4:
            v18 = 2 * v38 - 2;
            break;
          case 5:
            v18 = 2 * v38;
            break;
          case 6:
            v18 = 3 * v38 - 6;
            break;
          case 7:
            v18 = 6 * v38 / 4;
            break;
          case 8:
            v18 = 0;
            break;
          default:
            v18 = v38;
            break;
        }
        sub_10016B00(v31, v29, v18);
      }
      (*(void (__thiscall **)(int, int, int, _BYTE *))(*(_DWORD *)v28 + 80))(v28, v38, v34, v26);
      v32 = 0;
      v33 = 0;
      v37 = 0;
      v36 = 0;
      v35 = -1;
      v28 = 0;
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v15 + 48))(v15, -1, 0);
      if ( v36 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v36 + 8))(v36) )
        (*(void (__thiscall **)(int))(*(_DWORD *)v36 + 16))(v36);
      if ( v32 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v32 + 8))(v32) )
        (*(void (__thiscall **)(int))(*(_DWORD *)v32 + 16))(v32);
    }
  }
  else
  {
    v7 = *(_DWORD *)(this + 96);
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        result = v8 - 1;
        if ( !result )
          return sub_10223A90(this, (_BYTE *)this, a3, a4, (int)a2, v5);
      }
      else
      {
        return sub_102236E0(this, (_BYTE *)this, a3, a4, (int)a2, v5);
      }
    }
    else
    {
      return sub_10225270((float *)this, a3, a4, a2, v5);
    }
  }
  return result;
}
