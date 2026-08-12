void __thiscall sub_100F9580(int this)
{
  int v1; // eax
  int v3; // edi
  char v4; // al
  unsigned int v5; // eax
  double v6; // st7
  char *v7; // eax
  int v8; // [esp-8h] [ebp-18h]
  float v9[3]; // [esp+4h] [ebp-Ch] BYREF

  v1 = *((_DWORD *)off_103DC81C + 6);
  if ( *(_DWORD *)(this + 192) != v1 )
  {
    *(_DWORD *)(this + 192) = v1;
    if ( *(_DWORD *)(this + 324) == -1
      || *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 324) & 0xFFF) + 2) != *(_DWORD *)(this + 324) >> 12 )
    {
      v3 = 0;
    }
    else
    {
      v3 = *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 324) & 0xFFF) + 1);
    }
    v4 = *(_BYTE *)(this + 316);
    if ( (v4 || v3) && v4 != 6 )
    {
      v5 = *(_DWORD *)(this + 488);
      if ( v5 == -1
        || *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 488) & 0xFFF) + 2) != v5 >> 12
        || !*((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 488) & 0xFFF) + 1) )
      {
        sub_1000DEC0((_DWORD *)this, 1);
      }
      if ( v3 )
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 496))(v3);
      }
      else
      {
        if ( (*(_DWORD *)(this + 732) & 0x800000) == 0 && sub_1000E340((float *)(this + 284), &flt_10459240) )
        {
          sub_10038150(this);
          v6 = *((float *)off_103DC81C + 4) * 0.5 + 1.0;
          v9[0] = *(float *)(this + 284) * v6 + *(float *)(this + 244);
          v9[1] = *(float *)(this + 288) * v6 + *(float *)(this + 248);
          v9[2] = v6 * *(float *)(this + 292) + *(float *)(this + 252);
          sub_100399E0(this, v9);
          *(float *)(this + 284) = flt_10459240;
          *(_QWORD *)(this + 288) = qword_10459244;
        }
        sub_1000DEC0((_DWORD *)this, 0x800000);
      }
      switch ( *(_BYTE *)(this + 316) )
      {
        case 0:
          sub_100F8A10((_DWORD *)this);
          break;
        case 3:
          sub_100F7010();
          break;
        case 4:
        case 5:
          sub_100F9240(this, v3);
          break;
        case 6:
          return;
        case 7:
        case 8:
          sub_100F7030();
          break;
        case 0xB:
          sub_100F72A0(this, v3);
          break;
        default:
          v8 = *(unsigned __int8 *)(this + 316);
          v7 = sub_10034D90((void *)this);
          Warning("PhysicsSimulate: %s bad movetype %d", v7, v8);
          break;
      }
    }
    else
    {
      sub_100F7030();
    }
  }
}
