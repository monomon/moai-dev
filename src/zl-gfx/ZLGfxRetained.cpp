// Copyright (c) 2010-2011 Zipline Games, Inc. All Rights Reserved.
// http://getmoai.com

#include "pch.h"

#include <zl-gfx/ZLGfxRetained.h>

//================================================================//
// ZLGfxRetained
//================================================================//

//----------------------------------------------------------------//
void ZLGfxRetained::ActiveTexture ( u32 textureUnit ) {

	assert ( this->mStream );
	
	this->mStream->Write < u32 >( ACTIVE_TEXTURE );
	this->mStream->Write < u32 >( textureUnit );
}

//----------------------------------------------------------------//
void ZLGfxRetained::AttachShader ( ZLGfxHandle* program, ZLGfxHandle* shader ) {

	assert ( this->mStream );

	this->mStream->Write < u32 >( ATTACH_SHADER );
	this->mStream->Write < ZLGfxHandle* >( program );
	this->mStream->Write < ZLGfxHandle* >( shader );
}

//----------------------------------------------------------------//
void ZLGfxRetained::BindAttribLocation ( ZLGfxHandle* program, u32 index, cc8* name ) {
	
	assert ( this->mStream );

	this->mStream->Write < u32 >( BIND_ATTRIB_LOCATION );
	this->mStream->Write < ZLGfxHandle* >( program );
	this->mStream->Write < u32 >( index );
	
	size_t size = strlen ( name );
	this->mStream->Write < size_t >( size );
	this->mStream->WriteBytes ( name, size );
}

//----------------------------------------------------------------//
void ZLGfxRetained::BindBuffer ( u32 target, ZLGfxHandle* handle ) {

	assert ( this->mStream );

	this->mStream->Write < u32 >( BIND_BUFFER );
	this->mStream->Write < u32 >( target );
	this->mStream->Write < ZLGfxHandle* >( handle );
}

//----------------------------------------------------------------//
void ZLGfxRetained::BindFramebuffer ( u32 target, ZLGfxHandle* handle ) {

	assert ( this->mStream );

	this->mStream->Write < u32 >( BIND_FRAMEBUFFER );
	this->mStream->Write < u32 >( target );
	this->mStream->Write < ZLGfxHandle* >( handle );
}

//----------------------------------------------------------------//
void ZLGfxRetained::BindRenderbuffer ( ZLGfxHandle* handle ) {

	assert ( this->mStream );

	this->mStream->Write < u32 >( BIND_RENDERBUFFER );
	this->mStream->Write < ZLGfxHandle* >( handle );
}

//----------------------------------------------------------------//
void ZLGfxRetained::BindTexture ( ZLGfxHandle* handle ) {

	assert ( this->mStream );

	this->mStream->Write < u32 >( BIND_TEXTURE );
	this->mStream->Write < ZLGfxHandle* >( handle );
}

//----------------------------------------------------------------//
void ZLGfxRetained::BindVertexArray ( ZLGfxHandle* handle ) {

	assert ( this->mStream );

	this->mStream->Write < u32 >( BIND_VERTEX_ARRAY );
	this->mStream->Write < ZLGfxHandle* >( handle );
}

//----------------------------------------------------------------//
void ZLGfxRetained::BlendFunc ( u32 sourceFactor, u32 destFactor ) {

	assert ( this->mStream );

	this->mStream->Write < u32 >( BLEND_FUNC );
	this->mStream->Write < u32 >( sourceFactor );
	this->mStream->Write < u32 >( destFactor );
}

//----------------------------------------------------------------//
void ZLGfxRetained::BlendMode ( u32 mode ) {

	assert ( this->mStream );

	this->mStream->Write < u32 >( BLEND_MODE );
	this->mStream->Write < u32 >( mode );
}

//----------------------------------------------------------------//
void ZLGfxRetained::Clear ( u32 mask ) {

	assert ( this->mStream );

	this->mStream->Write < u32 >( CLEAR );
	this->mStream->Write < u32 >( mask );
}

//----------------------------------------------------------------//
void ZLGfxRetained::ClearColor ( float r, float g, float b, float a ) {

	assert ( this->mStream );

	this->mStream->Write < u32 >( CLEAR_COLOR );
	this->mStream->Write < float >( r );
	this->mStream->Write < float >( g );
	this->mStream->Write < float >( b );
	this->mStream->Write < float >( a );
}

//----------------------------------------------------------------//
void ZLGfxRetained::Color ( float r, float g, float b, float a ) {

	assert ( this->mStream );

	this->mStream->Write < u32 >( COLOR );
	this->mStream->Write < float >( r );
	this->mStream->Write < float >( g );
	this->mStream->Write < float >( b );
	this->mStream->Write < float >( a );
}

//----------------------------------------------------------------//
void ZLGfxRetained::CompileShader ( ZLGfxHandle* shader ) {

	assert ( this->mStream );

	this->mStream->Write < u32 >( COMPILE_SHADER );
	this->mStream->Write < ZLGfxHandle* >( shader );
}

//----------------------------------------------------------------//
ZLGfxHandle* ZLGfxRetained::CreateBuffer () {

	assert ( this->mStream );

	ZLGfxHandle* handle = new ZLGfxHandle ( ZLGfxHandle::BUFFER, 0 );
	
	this->mStream->Write < u32 >( CREATE );
	this->mStream->Write < ZLGfxHandle* >( handle );
	
	return handle;
}

//----------------------------------------------------------------//
ZLGfxHandle* ZLGfxRetained::CreateFramebuffer () {

	assert ( this->mStream );

	ZLGfxHandle* handle = new ZLGfxHandle ( ZLGfxHandle::FRAMEBUFFER, 0 );
	
	this->mStream->Write < u32 >( CREATE );
	this->mStream->Write < ZLGfxHandle* >( handle );
	
	return handle;
}

//----------------------------------------------------------------//
ZLGfxHandle* ZLGfxRetained::CreateProgram () {

	assert ( this->mStream );

	ZLGfxHandle* handle = new ZLGfxHandle ( ZLGfxHandle::PROGRAM, 0 );
	
	this->mStream->Write < u32 >( CREATE );
	this->mStream->Write < ZLGfxHandle* >( handle );
	
	return handle;
}

//----------------------------------------------------------------//
ZLGfxHandle* ZLGfxRetained::CreateRenderbuffer () {

	assert ( this->mStream );

	ZLGfxHandle* handle = new ZLGfxHandle ( ZLGfxHandle::RENDERBUFFER, 0 );
	
	this->mStream->Write < u32 >( CREATE );
	this->mStream->Write < ZLGfxHandle* >( handle );
	
	return handle;
}

//----------------------------------------------------------------//
ZLGfxHandle* ZLGfxRetained::CreateShader ( u32 shaderType ) {

	assert ( this->mStream );

	ZLGfxHandle* handle = new ZLGfxHandle ( ZLGfxHandle::SHADER, 0 );
	
	this->mStream->Write < u32 >( CREATE );
	this->mStream->Write < ZLGfxHandle* >( handle );
	
	return handle;
}

//----------------------------------------------------------------//
ZLGfxHandle* ZLGfxRetained::CreateTexture () {

	assert ( this->mStream );

	ZLGfxHandle* handle = new ZLGfxHandle ( ZLGfxHandle::TEXTURE, 0 );
	
	this->mStream->Write < u32 >( CREATE );
	this->mStream->Write < ZLGfxHandle* >( handle );
	
	return handle;
}

//----------------------------------------------------------------//
ZLGfxHandle* ZLGfxRetained::CreateVertexArray () {

	assert ( this->mStream );

	ZLGfxHandle* handle = new ZLGfxHandle ( ZLGfxHandle::VERTEXARRAY, 0 );
	
	this->mStream->Write < u32 >( CREATE );
	this->mStream->Write < ZLGfxHandle* >( handle );
	
	return handle;
}

//----------------------------------------------------------------//
void ZLGfxRetained::CullFace ( u32 mode ) {

	assert ( this->mStream );

	this->mStream->Write < u32 >( CULL_FACE );
	this->mStream->Write < u32 >( mode );
}

//----------------------------------------------------------------//
void ZLGfxRetained::DeleteHandle ( ZLGfxHandle* handle ) {

	assert ( this->mStream );

	this->mStream->Write < u32 >( DELETE );
	this->mStream->Write < ZLGfxHandle* >( handle );
}

//----------------------------------------------------------------//
void ZLGfxRetained::DepthFunc ( u32 depthFunc ) {

	assert ( this->mStream );

	this->mStream->Write < u32 >( DEPTH_FUNC );
	this->mStream->Write < u32 >( depthFunc );
}

//----------------------------------------------------------------//
void ZLGfxRetained::DepthMask ( bool flag ) {

	assert ( this->mStream );

	this->mStream->Write < u32 >( DEPTH_MASK );
	this->mStream->Write < u32 >( flag );
}

//----------------------------------------------------------------//
void ZLGfxRetained::Disable ( u32 cap ) {

	assert ( this->mStream );

	this->mStream->Write < u32 >( DISABLE );
	this->mStream->Write < u32 >( cap );
}

//----------------------------------------------------------------//
void ZLGfxRetained::DisableClientState ( u32 cap ) {

	assert ( this->mStream );

	this->mStream->Write < u32 >( DISABLE_CLIENT_STATE );
	this->mStream->Write < u32 >( cap );
}

//----------------------------------------------------------------//
void ZLGfxRetained::DisableVertexAttribArray ( u32 index ) {

	assert ( this->mStream );

	this->mStream->Write < u32 >( DISABLE_VERTEX_ATTRIB_ARRAY );
	this->mStream->Write < u32 >( index );
}

//----------------------------------------------------------------//
void ZLGfxRetained::Draw ( ZLGfx& draw ) {

	assert ( this->mStream );

	size_t top = this->mStream->GetCursor ();
	if ( top == 0 ) return;
	
	this->mStream->Seek ( 0, SEEK_SET );
	
	while ( this->mStream->GetCursor () < top ) {
	
		u32 command = this->mStream->Read < u32 >( UNKNOWN );
	
		if ( command == UNKNOWN ) break;
	
		switch ( command ) {
	
			case ACTIVE_TEXTURE: {
				draw.ActiveTexture (
					this->mStream->Read < u32 >( 0 )
				);
				break;
			}
			case ATTACH_SHADER: {
				// TODO: GFX
				break;
			}
			case BIND_ATTRIB_LOCATION: {
				// TODO: GFX
				break;
			}
			case BIND_BUFFER: {
				draw.BindBuffer (
					this->mStream->Read < u32 >( 0 ),
					this->mStream->Read < ZLGfxHandle* >( 0 )
				);
				break;
			}
			case BIND_FRAMEBUFFER: {
				draw.BindFramebuffer (
					this->mStream->Read < u32 >( 0 ),
					this->mStream->Read < ZLGfxHandle* >( 0 )
				);
				break;
			}
			case BIND_RENDERBUFFER: {
				draw.BindRenderbuffer (
					this->mStream->Read < ZLGfxHandle* >( 0 )
				);
				break;
			}
			case BIND_TEXTURE: {
				draw.BindTexture (
					this->mStream->Read < ZLGfxHandle* >( 0 )
				);
				break;
			}
			case BIND_VERTEX_ARRAY: {
				draw.BindVertexArray (
					this->mStream->Read < ZLGfxHandle* >( 0 )
				);
				break;
			}
			case BLEND_FUNC: {
				draw.BlendFunc (
					this->mStream->Read < u32 >( 0 ),
					this->mStream->Read < u32 >( 0 )
				);
				break;
			}
			case BLEND_MODE: {
				draw.BlendMode (
					this->mStream->Read < u32 >( 0 )
				);
				break;
			}
			case CLEAR: {
				draw.Clear (
					this->mStream->Read < u32 >( 0 )
				);
				break;
			}
			case CLEAR_COLOR: {
				draw.ClearColor (
					this->mStream->Read < float >( 0 ),
					this->mStream->Read < float >( 0 ),
					this->mStream->Read < float >( 0 ),
					this->mStream->Read < float >( 0 )
				);
				break;
			}
			case COLOR: {
				draw.Color (
					this->mStream->Read < float >( 0 ),
					this->mStream->Read < float >( 0 ),
					this->mStream->Read < float >( 0 ),
					this->mStream->Read < float >( 0 )
				);
				break;
			}
			case COMPILE_SHADER: {
				// TODO: GFX
				break;
			}
			case CREATE: {
				// TODO: GFX
				break;
			}
			case CULL_FACE: {
				draw.CullFace (
					this->mStream->Read < u32 >( 0 )
				);
				break;
			}
			case DEPTH_FUNC: {
				draw.DepthFunc (
					this->mStream->Read < u32 >( 0 )
				);
				break;
			}
			case DEPTH_MASK: {
				draw.DepthMask (
					this->mStream->Read < u32 >( 0 )
				);
				break;
			}
			case DISABLE: {
				draw.Disable (
					this->mStream->Read < u32 >( 0 )
				);
				break;
			}
			case DISABLE_CLIENT_STATE: {
				draw.DisableClientState (
					this->mStream->Read < u32 >( 0 )
				);
				break;
			}
			case DISABLE_VERTEX_ATTRIB_ARRAY: {
				draw.DisableVertexAttribArray (
					this->mStream->Read < u32 >( 0 )
				);
				break;
			}
			case DRAW_ARRAYS: {
				draw.DrawArrays (
					this->mStream->Read < u32 >( 0 ),
					this->mStream->Read < u32 >( 0 ),
					this->mStream->Read < u32 >( 0 )
				);
				break;
			}
			case DRAW_ELEMENTS: {
				// TODO: GFX
				break;
			}
			case ENABLE: {
				draw.Enable (
					this->mStream->Read < u32 >( 0 )
				);
				break;
			}
			case ENABLE_CLIENT_STATE: {
				draw.EnableClientState (
					this->mStream->Read < u32 >( 0 )
				);
				break;
			}
			case ENABLE_VERTEX_ATTRIB_ARRAY: {
				draw.EnableVertexAttribArray (
					this->mStream->Read < u32 >( 0 )
				);
				break;
			}
			case FLUSH: {
				draw.Flush ();
				break;
			}
			case FRAMEBUFFER_RENDERBUFFER: {
				// TODO: GFX
				break;
			}
			case FRAMEBUFFER_TEXTURE_2D: {
				// TODO: GFX
				break;
			}
			case LINE_WIDTH: {
				draw.LineWidth (
					this->mStream->Read < float >( 0 )
				);
				break;
			}
			case LINK_PROGRAM: {
				// TODO: GFX
				break;
			}
			case RENDER_BUFFER_STORAGE: {
				// TODO: GFX
				break;
			}
			case SCISSOR: {
				draw.Scissor (
					this->mStream->Read < s32 >( 0 ),
					this->mStream->Read < s32 >( 0 ),
					this->mStream->Read < u32 >( 0 ),
					this->mStream->Read < u32 >( 0 )
				);
				break;
			}
			case SHADER_SOURCE: {
				// TODO: GFX
				break;
			}
			case TEX_ENVI: {
				draw.TexEnvi (
					this->mStream->Read < u32 >( 0 ),
					this->mStream->Read < s32 >( 0 )
				);
				break;
			}
			case TEX_IMAGE_2D: {
				// TODO: GFX
				break;
			}
			case TEX_PARAMETERI: {
				draw.TexParameteri (
					this->mStream->Read < u32 >( 0 ),
					this->mStream->Read < s32 >( 0 )
				);
				break;
			}
			case TEX_SUB_IMAGE_2D: {
				// TODO: GFX
				break;
			}
			case UNIFORM_1F: {
				draw.Uniform1f (
					this->mStream->Read < u32 >( 0 ),
					this->mStream->Read < float >( 0 )
				);
				break;
			}
			case UNIFORM_1I: {
				draw.Uniform1i (
					this->mStream->Read < u32 >( 0 ),
					this->mStream->Read < s32 >( 0 )
				);
				break;
			}
			case UNIFORM_4FV: {
			
				u32 location = this->mStream->Read < u32 >( location );
				u32 count = this->mStream->Read < u32 >( count );
				
				float vec [ 4 ];
				this->mStream->ReadBytes ( vec, sizeof ( float ) * 4 );
			
				draw.Uniform4fv ( location, count, vec );
				break;
			}
			case UNIFORM_MATRIX_3FV: {
				
				u32 location = this->mStream->Read < u32 >( 0 );
				u32 count = this->mStream->Read < u32 >( 0 );
				bool transpose = this->mStream->Read < bool >( false );
				
				float mtx [ 9 ];
				this->mStream->ReadBytes ( &mtx, sizeof ( float ) * 9 );
				
				draw.UniformMatrix3fv ( location, count, transpose, mtx );
				
				break;
			}
			case UNIFORM_MATRIX_4FV: {
				
				u32 location = this->mStream->Read < u32 >( 0 );
				u32 count = this->mStream->Read < u32 >( 0 );
				bool transpose = this->mStream->Read < bool >( false );
				
				float mtx [ 16 ];
				this->mStream->ReadBytes ( &mtx, sizeof ( float ) * 16 );
				
				draw.UniformMatrix4fv ( location, count, transpose, mtx );
			
				break;
			}
			case USE_PROGRAM: {
//				draw.UseProgram (
//					this->mStream->Read < u32 >( 0 )
//				);
				break;
			}
			case VERTEX_ATTRIB_POINTER: {
				draw.VertexAttribPointer (
					this->mStream->Read < u32 >( 0 ),
					this->mStream->Read < u32 >( 0 ),
					this->mStream->Read < u32 >( 0 ),
					this->mStream->Read < bool >( false ),
					this->mStream->Read < u32 >( 0 ),
					( void* )this->mStream->Read < size_t >( 0 ) // TODO: fix to use buffer object
				);
				break;
			}
			case VIEWPORT: {
				draw.Viewport (
					this->mStream->Read < s32 >( 0 ),
					this->mStream->Read < s32 >( 0 ),
					this->mStream->Read < u32 >( 0 ),
					this->mStream->Read < u32 >( 0 )
				);
				break;
			}
		}
	}
	
	this->mStream->Seek ( top, SEEK_SET );
}

//----------------------------------------------------------------//
void ZLGfxRetained::DrawArrays ( u32 primType, u32 first, u32 count ) {

	assert ( this->mStream );

	this->mStream->Write < u32 >( DRAW_ARRAYS );
	this->mStream->Write < u32 >( primType );
	this->mStream->Write < u32 >( first );
	this->mStream->Write < u32 >( count );
}

//----------------------------------------------------------------//
void ZLGfxRetained::DrawElements ( u32 primType, u32 count, u32 indexType, const void* indices ) {

	assert ( this->mStream );

	this->mStream->Write < u32 >( DRAW_ELEMENTS );
	this->mStream->Write < u32 >( primType );
	this->mStream->Write < u32 >( count );
	this->mStream->Write < u32 >( indexType );
	this->mStream->Write < const void* >( indices );
}

//----------------------------------------------------------------//
void ZLGfxRetained::BufferData ( u32 target, u32 size, const void* data, u32 usage ) {

	assert ( this->mStream );

	this->mStream->Write < u32 >( BUFFER_DATA );
	this->mStream->Write < u32 >( target );
	this->mStream->Write < u32 >( size );
	this->mStream->Write < const void* >( data );
	this->mStream->Write < u32 >( usage );
}

//----------------------------------------------------------------//
void ZLGfxRetained::BufferSubData ( u32 target, u32 offset, u32 size, const void* data ) {

	assert ( this->mStream );

	this->mStream->Write < u32 >( BUFFER_SUB_DATA );
	this->mStream->Write < u32 >( target );
	this->mStream->Write < u32 >( offset );
	this->mStream->Write < u32 >( size );
	this->mStream->Write < const void* >( data );
}

//----------------------------------------------------------------//
void ZLGfxRetained::Enable ( u32 cap ) {

	assert ( this->mStream );

	this->mStream->Write < u32 >( ENABLE );
	this->mStream->Write < u32 >( cap );
}

//----------------------------------------------------------------//
void ZLGfxRetained::EnableClientState ( u32 cap ) {

	assert ( this->mStream );

	this->mStream->Write < u32 >( ENABLE_CLIENT_STATE );
	this->mStream->Write < u32 >( cap );
}

//----------------------------------------------------------------//
void ZLGfxRetained::EnableVertexAttribArray ( u32 index ) {

	assert ( this->mStream );

	this->mStream->Write < u32 >( ENABLE_VERTEX_ATTRIB_ARRAY );
	this->mStream->Write < u32 >( index );
}

//----------------------------------------------------------------//
void ZLGfxRetained::Flush () {

	assert ( this->mStream );

	this->mStream->Write < u32 >( FLUSH );
}

//----------------------------------------------------------------//
void ZLGfxRetained::FramebufferRenderbuffer ( u32 target, u32 attachment, ZLGfxHandle* renderbuffer ) {

	assert ( this->mStream );

	this->mStream->Write < u32 >( FRAMEBUFFER_RENDERBUFFER );
	this->mStream->Write < u32 >( target );
	this->mStream->Write < u32 >( attachment );
	this->mStream->Write < ZLGfxHandle* >( renderbuffer );
}

//----------------------------------------------------------------//
void ZLGfxRetained::FramebufferTexture2D ( u32 target, u32 attachment, ZLGfxHandle* texture, s32 level ) {

	assert ( this->mStream );

	this->mStream->Write < u32 >( FRAMEBUFFER_TEXTURE_2D );
	this->mStream->Write < u32 >( target );
	this->mStream->Write < u32 >( attachment );
	this->mStream->Write < ZLGfxHandle* >( texture );
	this->mStream->Write < s32 >( level );
}

//----------------------------------------------------------------//
void ZLGfxRetained::LineWidth ( float width ) {

	assert ( this->mStream );

	this->mStream->Write < u32 >( LINE_WIDTH );
	this->mStream->Write < float >( width );
}

//----------------------------------------------------------------//
void ZLGfxRetained::LinkProgram ( ZLGfxHandle* program ) {

	assert ( this->mStream );

	this->mStream->Write < u32 >( LINK_PROGRAM );
	this->mStream->Write < ZLGfxHandle* >( program );
}

//----------------------------------------------------------------//
void ZLGfxRetained::RenderbufferStorage ( u32 internalFormat, u32 width, u32 height ) {
	
	assert ( this->mStream );
	
	this->mStream->Write < u32 >( RENDER_BUFFER_STORAGE );
	this->mStream->Write < u32 >( internalFormat );
	this->mStream->Write < u32 >( width );
	this->mStream->Write < u32 >( height );
}

//----------------------------------------------------------------//
void ZLGfxRetained::Reset () {

	assert ( this->mStream );

	this->mStream->Seek ( 0, SEEK_SET );
}

//----------------------------------------------------------------//
void ZLGfxRetained::Scissor ( s32 x, s32 y, u32 w, u32 h ) {

	assert ( this->mStream );

	this->mStream->Write < u32 >( SCISSOR );
	this->mStream->Write < s32 >( x );
	this->mStream->Write < s32 >( y );
	this->mStream->Write < u32 >( w );
	this->mStream->Write < u32 >( h );
}

//----------------------------------------------------------------//
void ZLGfxRetained::ShaderSource ( ZLGfxHandle* shader, u32 count, const char** string, const s32* length ) {

	assert ( this->mStream );

	this->mStream->Write < u32 >( SHADER_SOURCE );
	this->mStream->Write < ZLGfxHandle* >( shader );
	this->mStream->Write < u32 >( count );
	this->mStream->Write < const char** >( string );
	this->mStream->Write < const s32* >( length );
}

//----------------------------------------------------------------//
void ZLGfxRetained::TexEnvi ( u32 pname, s32 param ) {

	assert ( this->mStream );

	this->mStream->Write < u32 >( TEX_ENVI );
	this->mStream->Write < u32 >( pname );
	this->mStream->Write < s32 >( param );
}

//----------------------------------------------------------------//
void ZLGfxRetained::TexImage2D ( u32 level, u32 internalFormat, u32 width, u32 height, u32 format, u32 type, const void* data ) {
	
	assert ( this->mStream );

	this->mStream->Write < u32 >( TEX_IMAGE_2D );
	this->mStream->Write < u32 >( level );
	this->mStream->Write < u32 >( width );
	this->mStream->Write < u32 >( height );
	this->mStream->Write < u32 >( format );
	this->mStream->Write < u32 >( type );
	this->mStream->Write < const void* >( data );
}

//----------------------------------------------------------------//
void ZLGfxRetained::TexParameteri ( u32 pname, s32 param ) {

	assert ( this->mStream );

	this->mStream->Write < u32 >( TEX_PARAMETERI );
	this->mStream->Write < u32 >( pname );
	this->mStream->Write < s32 >( param );
}

//----------------------------------------------------------------//
void ZLGfxRetained::TexSubImage2D ( u32 level, s32 xOffset, s32 yOffset, u32 width, u32 height, u32 format, u32 type, const void* data ) {

	assert ( this->mStream );

	this->mStream->Write < u32 >( TEX_SUB_IMAGE_2D );
	this->mStream->Write < u32 >( level );
	this->mStream->Write < s32 >( xOffset );
	this->mStream->Write < s32 >( yOffset );
	this->mStream->Write < u32 >( width );
	this->mStream->Write < u32 >( height );
	this->mStream->Write < u32 >( format );
	this->mStream->Write < u32 >( type );
	this->mStream->Write < const void* >( data );
}

//----------------------------------------------------------------//
void ZLGfxRetained::Uniform1f ( u32 location, float v0 ) {

	assert ( this->mStream );

	this->mStream->Write < u32 >( UNIFORM_1F );
	this->mStream->Write < float >( v0 );
}

//----------------------------------------------------------------//
void ZLGfxRetained::Uniform1i ( u32 location, s32 v0 ) {

	assert ( this->mStream );

	this->mStream->Write < u32 >( UNIFORM_1I );
	this->mStream->Write < s32 >( v0 );
}

//----------------------------------------------------------------//
void ZLGfxRetained::Uniform4fv ( u32 location, u32 count, const float* value ) {

	assert ( this->mStream );

	this->mStream->Write < u32 >( UNIFORM_4FV );
	this->mStream->Write < u32 >( location );
	this->mStream->Write < u32 >( count );
	this->mStream->WriteBytes ( value, sizeof ( float ) * 4 );
}

//----------------------------------------------------------------//
void ZLGfxRetained::UniformMatrix3fv ( u32 location, u32 count, bool transpose, const float* mtx ) {

	assert ( this->mStream );

	this->mStream->Write < u32 >( UNIFORM_4FV );
	this->mStream->Write < u32 >( location );
	this->mStream->Write < u32 >( count );
	this->mStream->Write < bool >( transpose );
	this->mStream->WriteBytes ( mtx, sizeof ( float ) * 9 );
}

//----------------------------------------------------------------//
void ZLGfxRetained::UniformMatrix4fv ( u32 location, u32 count, bool transpose, const float* mtx ) {

	assert ( this->mStream );

	this->mStream->Write < u32 >( UNIFORM_4FV );
	this->mStream->Write < u32 >( location );
	this->mStream->Write < u32 >( count );
	this->mStream->Write < bool >( transpose );
	this->mStream->WriteBytes ( mtx, sizeof ( float ) * 16 );
}

//----------------------------------------------------------------//
void ZLGfxRetained::UseProgram ( ZLGfxHandle* program ) {

	assert ( this->mStream );

	this->mStream->Write < u32 >( UNIFORM_4FV );
	this->mStream->Write < ZLGfxHandle* >( program );
}

//----------------------------------------------------------------//
void ZLGfxRetained::VertexAttribPointer ( u32 index, u32 size, u32 type, bool normalized, u32 stride, const void* pointer ) {

	assert ( this->mStream );

	this->mStream->Write < u32 >( VERTEX_ATTRIB_POINTER );
	this->mStream->Write < u32 >( index );
	this->mStream->Write < u32 >( size );
	this->mStream->Write < u32 >( type );
	this->mStream->Write < bool >( normalized );
	this->mStream->Write < u32 >( stride );
	this->mStream->Write < size_t >(( size_t )pointer ); // TODO: fix to use buffer object
}

//----------------------------------------------------------------//
void ZLGfxRetained::Viewport ( s32 x, s32 y, u32 w, u32 h ) {

	assert ( this->mStream );

	this->mStream->Write < u32 >( VIEWPORT );
	this->mStream->Write < s32 >( x );
	this->mStream->Write < s32 >( y );
	this->mStream->Write < u32 >( w );
	this->mStream->Write < u32 >( h );
}

//----------------------------------------------------------------//
ZLGfxRetained::ZLGfxRetained () :
	mStream ( &this->mMemStream ) {
}

//----------------------------------------------------------------//
ZLGfxRetained::~ZLGfxRetained () {
}
