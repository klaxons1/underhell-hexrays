double __thiscall sub_1013F040(void *this)
{
  int v2; // esi
  bool v3; // bl
  double v4; // st7
  float v5; // [esp+0h] [ebp-4h]

  if ( (*(int (__thiscall **)(int, void *))(*(_DWORD *)dword_1041315C + 188))(dword_1041315C, this) < 80 )
    return 0.0;
  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C97C + 200))(dword_1047C97C);
  v3 = *(_DWORD *)(dword_1043A944 + 48) >= 1;
  if ( !(*(unsigned __int8 (**)(void))(*(_DWORD *)dword_1041315C + 384))() )
    v3 = 0;
  if ( *(_DWORD *)(dword_1043AD34 + 48) )
    v3 = 1;
  if ( *(_DWORD *)(dword_1043AD7C + 48) )
    v3 = 0;
  if ( *(_DWORD *)(dword_1042F8D4 + 48) )
    v3 = 0;
  if ( *(_DWORD *)(dword_1043B1B4 + 48) == 1 )
    v3 = 0;
  v4 = 0.0;
  if ( v3 )
  {
    v5 = *(float *)(dword_1043A98C + 44);
    v4 = sub_1013E750() * v5 + (1.0 - v5) * flt_103E7E18;
    flt_103E7E18 = v4;
  }
  if ( !v2 )
    v4 = v4 * *(float *)(dword_1043AEE4 + 44);
  return v4 * *(float *)(dword_1043AF2C + 44);
}
