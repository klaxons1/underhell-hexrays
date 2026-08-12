void __thiscall sub_10058920(int this, int a2)
{
  float *v2; // edi
  double v4; // st7
  double v5; // st7
  int v6; // ebx
  int v7; // ecx
  int v8; // eax
  bool v9; // zf
  double v10; // st7
  double v11; // st6
  double v12; // st7
  int v13; // eax
  int v14; // eax
  int v15; // ecx
  int (__thiscall ***v16)(_DWORD, int); // edi
  int v17; // eax
  const char *v18; // eax
  const char *v19; // [esp+8h] [ebp-20h]
  double v20; // [esp+Ch] [ebp-1Ch]
  int v21; // [esp+14h] [ebp-14h]
  int v22; // [esp+14h] [ebp-14h]
  float v23; // [esp+24h] [ebp-4h]

  v2 = (float *)a2;
  if ( a2 )
  {
    if ( *(_BYTE *)(a2 + 1964) )
    {
      v4 = *((float *)off_103DC81C + 3);
      *(_BYTE *)(a2 + 1964) = 0;
      v2[501] = v4;
    }
    v5 = v2[498];
    v6 = (int)v2[497];
    v7 = *(_DWORD *)(this + 20);
    *(float *)(this + 56) = v2[499];
    *(_DWORD *)(this + 48) = (int)v5;
    *(_DWORD *)(this + 44) = v6;
    *(float *)(this + 52) = v2[501];
    v8 = (*(int (__thiscall **)(int, int, char *, _DWORD))(*(_DWORD *)v7 + 44))(v7, (int)v2 + 1447, (char *)&a2 + 3, 0);
    v9 = HIBYTE(a2) == 0;
    *(_DWORD *)(this + 40) = v8;
    if ( !v9 )
    {
      v10 = 0.0;
      if ( *(float *)(this + 56) <= 0.0 )
      {
        v12 = (double)*(int *)(this + 48);
LABEL_13:
        v23 = v12;
        if ( *(_DWORD *)(dword_1040C9AC + 48) )
        {
          v13 = (***(int (__thiscall ****)(_DWORD))(this + 20))(*(_DWORD *)(this + 20));
          if ( sub_10227EE0(v13, "faceandhair") )
          {
            v14 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 40) + 4))(*(_DWORD *)(this + 40));
            if ( sub_10227EE0(v14, "warp") )
            {
              v15 = *(_DWORD *)(this + 40);
              v16 = *(int (__thiscall ****)(_DWORD, int))(this + 20);
              v21 = dword_1040C988++;
              v17 = (*(int (__thiscall **)(int, _DWORD, _DWORD, int))(*(_DWORD *)v15 + 4))(
                      v15,
                      COERCE_UNSIGNED_INT64(v23),
                      HIDWORD(COERCE_UNSIGNED_INT64(v23)),
                      v21);
              v18 = (const char *)(**v16)(v16, v17);
              DevMsg(1, "CMaterialFloatLerpProxy::OnBind \"%s\" %s=%f %d\n", v18, v19, v20, v22);
            }
          }
        }
        (*(void (__stdcall **)(float))(**(_DWORD **)(this + 40) + 12))(COERCE_FLOAT(LODWORD(v23)));
        return;
      }
      v11 = (*((float *)off_103DC81C + 3) - *(float *)(this + 52)) / *(float *)(this + 56);
      if ( v11 <= 1.0 )
      {
        if ( v11 < 0.0 )
          goto LABEL_9;
      }
      else
      {
        v11 = 1.0;
      }
      v10 = v11;
LABEL_9:
      v12 = v10 * (double)(*(_DWORD *)(this + 48) - *(_DWORD *)(this + 44)) + (double)*(int *)(this + 44);
      goto LABEL_13;
    }
  }
}
