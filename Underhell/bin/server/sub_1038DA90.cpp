void __thiscall sub_1038DA90(int this)
{
  int v2; // eax
  float *v3; // eax
  int v4; // edi
  int v5; // ecx
  int v6[3]; // [esp+1Ch] [ebp-1Ch] BYREF
  int v7[3]; // [esp+28h] [ebp-10h] BYREF
  float v8; // [esp+34h] [ebp-4h]

  switch ( *(_DWORD *)(this + 4272) )
  {
    case 0:
      return;
    case 1:
      if ( *(float *)(dword_106B31C8 + 12) > (double)*(float *)(this + 4280) )
        goto LABEL_7;
      break;
    case 3:
      if ( *(float *)(dword_106B31C8 + 12) < (double)*(float *)(this + 4280) )
      {
        v8 = *(float *)(this + 4280) - *(float *)(dword_106B31C8 + 12);
        v4 = sub_10389070((_DWORD *)this, v8);
        if ( v4 > 1 )
        {
          sub_1038C750((_DWORD *)this, v8, 0.0, 0.0, (float *)v6, (float *)v7);
          sub_103891B0((float *)this, (int)v6, (float *)v7, v8, v4);
          sub_1038D800(v5);
        }
      }
      break;
    case 4:
      v2 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
      v3 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v2 + 576))(v2);
      *(float *)(this + 4208) = *v3;
      *(float *)(this + 4212) = v3[1];
      *(float *)(this + 4216) = v3[2];
      break;
    default:
LABEL_7:
      sub_1038D800(this);
      break;
  }
}
